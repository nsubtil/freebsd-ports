# Created by: chinsan
# $FreeBSD$

PORTNAME=	evilvte
DISTVERSION=	0.5.2~pre1
CATEGORIES=	x11 gnome
MASTER_SITES=	http://www.calno.com/${PORTNAME}/

MAINTAINER=	aragon@phat.za.net
COMMENT=	VTE based, super lightweight terminal emulator

USES=		pkgconfig gmake tar:xz
HAS_CONFIGURE=	yes
ALL_TARGET=	evilvte
INSTALLS_ICONS=	yes
USE_GNOME=	vte

pre-everything::
.if !defined(EVILVTE_CONF)
	@${ECHO_MSG}
	@${ECHO_MSG} "!! NOTE !!"
	@${ECHO_MSG}
	@${ECHO_MSG} "You can build evilvte with your own config.h using the EVILVTE_CONF knob:"
	@${ECHO_MSG} "make EVILVTE_CONF=/path/to/evilvte-config.h install clean"
	@${ECHO_MSG}
.endif

post-patch:
#	 disable man page installation
	@${REINPLACE_CMD} -e '59,60 d' ${WRKSRC}/Makefile
	@${REINPLACE_CMD} -e '/^make/ s/make/gmake/' ${WRKSRC}/src/process.sh
.if defined(EVILVTE_CONF)
	@${ECHO_MSG} "creating config.h from ${EVILVTE_CONF}"
	@${CP} ${EVILVTE_CONF} ${WRKSRC}/src/config.h
.endif

post-install:
	${INSTALL_MAN} ${WRKSRC}/misc/evilvte.1 ${STAGEDIR}${PREFIX}/man/man1
	${INSTALL_MAN} ${WRKSRC}/misc/showvte.1 ${STAGEDIR}${PREFIX}/man/man1

.include <bsd.port.mk>

# Created by: Samy Al Bahra <samy@kerneled.com>
# $FreeBSD$

PORTNAME=	kacst_fonts
PORTVERSION=	2.01
CATEGORIES=	arabic
MASTER_SITES=	SF/arabeyes/${PORTNAME} \
		http://www.c-s.li/ports/
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Truetype Arabic fonts created by KACST

LICENSE=	GPLv2

BUILD_DEPENDS=	ttmkfdir:${PORTSDIR}/x11-fonts/ttmkfdir

USES=		tar:bzip2
WRKSRC=		${WRKDIR}/KacstArabicFonts-${PORTVERSION}

SUB_FILES=	pkg-message
SUB_LIST=	PORTNAME="${PORTNAME}"

do-build:
	(cd ${WRKDIR} && ttmkfdir -c -d ${WRKSRC} > ${WRKSRC}/fonts.dir)

do-install:
	@${MKDIR} ${STAGEDIR}/${PREFIX}/lib/X11/fonts/kacst_fonts
	${INSTALL_DATA} ${WRKSRC}/*.ttf ${WRKSRC}/fonts.dir \
		${STAGEDIR}/${PREFIX}/lib/X11/fonts/kacst_fonts

.include <bsd.port.mk>

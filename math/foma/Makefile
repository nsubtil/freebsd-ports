# Created by: Dmitry Sivachenko <mitya@yandex-team.ru>
# $FreeBSD$

PORTNAME=	foma
PORTVERSION=	0.9.17
CATEGORIES=	math
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}

MAINTAINER=	demon@FreeBSD.org
COMMENT=	Toolkit for constructing finite-state automata and transducers

LICENSE=	GPLv2

USES=		bison gmake readline
USE_LDCONFIG=	yes

do-install:
	(cd ${WRKSRC} && ${INSTALL_DATA} fomalib.h fomalibconf.h ${STAGEDIR}${PREFIX}/include/)
	(cd ${WRKSRC} && ${INSTALL_PROGRAM} foma flookup cgflookup ${STAGEDIR}${PREFIX}/bin/)
	${INSTALL_LIB} ${WRKSRC}/libfoma.a ${STAGEDIR}${PREFIX}/lib/
	${INSTALL_LIB} ${WRKSRC}/libfoma.so.${PORTVERSION} ${STAGEDIR}${PREFIX}/lib/libfoma.so.0
	(cd ${STAGEDIR}${PREFIX}/lib && ${LN} -s libfoma.so.0 libfoma.so)

.include <bsd.port.mk>

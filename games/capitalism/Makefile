# Created by: Rusmir Dusko <nemysis@FreeBSD.org>
# $FreeBSD$

PORTNAME=	capitalism
PORTVERSION=	0.5.1
PORTREVISION=	4
CATEGORIES=	games
MASTER_SITES=	SF/${PORTNAME}/Capitalism/0.5/
EXTRACT_SUFX=	.tbz

MAINTAINER=	games@FreeBSD.org
COMMENT=	Qt client for the Monopd server

LICENSE=	GPLv2 # or later
LICENSE_FILE=	${WRKSRC}/copying.txt

LIB_DEPENDS=	libpthread-stubs.so:${PORTSDIR}/devel/libpthread-stubs \
		libpcre.so:${PORTSDIR}/devel/pcre \
		libpng15.so:${PORTSDIR}/graphics/png \
		libfreetype.so:${PORTSDIR}/print/freetype2 \
		libexpat.so:${PORTSDIR}/textproc/expat2 \
		libfontconfig.so:${PORTSDIR}/x11-fonts/fontconfig

WRKSRC=		${WRKDIR}/Capitalism-${PORTVERSION}

USES=		iconv qmake
USE_XORG=	ice sm x11 xau xcb xdmcp xext xrender
USE_QT4=	moc_build rcc_build uic_build iconengines_run imageformats_run \
		corelib gui network script xml

PORTDOCS=	README changelog readme.txt

INSTALLS_ICONS=	yes
ICON_SIZES=	16x16 22x22 24x24 32x32 48x48 64x64

DESKTOP_ENTRIES="Capitalism" "" "${PORTNAME}" \
		"${PORTNAME}" "Game;BoardGame;" ""

OPTIONS_DEFINE=	NLS
OPTIONS_SUB=	yes

NLS_CONFIGURE_ENABLE=	nls
NLS_USES=	gettext

.include <bsd.port.options.mk>

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/Capitalism \
		${STAGEDIR}${PREFIX}/bin/${PORTNAME}

.for d in games images
	@(cd ${WRKSRC} && ${COPYTREE_SHARE} ${d} ${STAGEDIR}${DATADIR})
.endfor

.if ${PORT_OPTIONS:MNLS}
	@(cd ${WRKSRC} && ${COPYTREE_SHARE} ts ${STAGEDIR}${DATADIR})
.endif

.for s in ${ICON_SIZES}
	@${MKDIR} ${STAGEDIR}${PREFIX}/share/icons/hicolor/${s}/apps
	${INSTALL_DATA} ${WRKSRC}/icons/${s}.png \
		${STAGEDIR}${PREFIX}/share/icons/hicolor/${s}/apps/${PORTNAME}.png
.endfor
	${LN} -sf ${PREFIX}/share/icons/hicolor/48x48/apps/${PORTNAME}.png \
		${STAGEDIR}${PREFIX}/share/pixmaps/

	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>

# Created by: Maxim Sobolev <sobomax@FreeBSD.org>
# $FreeBSD$

PORTNAME=	uhexen
PORTVERSION=	0.601
PORTREVISION=	10
CATEGORIES=	games
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/U-hexen%20version%20${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Yet another port of Hexen, popular game from Raven Software

USES=		gmake
USE_SDL=	mixer sdl
MAKE_ENV=	EXTRA_LIBS=-lm

PLIST_FILES=	bin/uhexen

OPTIONS_DEFINE=	MUSIC
OPTIONS_DEFAULT=	MUSIC
MUSIC_DESC=	In-game MIDI music support
MUSIC_RUN_DEPENDS=	${LOCALBASE}/lib/timidity/goemon.cfg:${PORTSDIR}/audio/timidity

.include <bsd.port.pre.mk>

.if ${ARCH} == "powerpc"
BROKEN=		Does not compile on ${ARCH}
.endif

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

.include "${.CURDIR}/../doom-data/Makefile.include"
.include <bsd.port.post.mk>

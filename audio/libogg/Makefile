# Created by: t.vanklaveren@student.utwente.nl
# $FreeBSD$

PORTNAME=	libogg
PORTVERSION=	1.3.2
PORTEPOCH=	4
CATEGORIES=	audio
MASTER_SITES=	http://downloads.xiph.org/releases/ogg/

MAINTAINER=	naddy@FreeBSD.org
COMMENT=	Ogg bitstream library

USES=		libtool:oldver pathfix tar:xz
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes

OPTIONS_DEFINE=	DOCS

regression-test: build
	@cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} ${MAKE_CMD} check

.include <bsd.port.mk>

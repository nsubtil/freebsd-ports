# Created by: Kris Kennaway <kris@FreeBSD.org>
# $FreeBSD$

PORTNAME=	nsping
PORTVERSION=	0.8
PORTREVISION=	2
CATEGORIES=	dns
MASTER_SITES=	LOCAL
MASTER_SITE_SUBDIR=	roam
DISTFILES=	nsping.tar.gz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	DNS "ping"

PLIST_FILES=	sbin/nsping man/man8/nsping.8.gz

do-install:
		${INSTALL_PROGRAM} ${WRKSRC}/nsping ${STAGEDIR}${PREFIX}/sbin
		${INSTALL_DATA} ${WRKSRC}/nsping.8 ${STAGEDIR}${PREFIX}/man/man8

.include <bsd.port.mk>

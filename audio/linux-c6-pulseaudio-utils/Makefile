# Created by: Johannes Meixner <xmj@chaot.net>
# $FreeBSD$

PORTNAME=	pulseaudio-utils
PORTVERSION=	0.9.21
CATEGORIES=	audio linux

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Utils for PulseAudio clients (Linux CentOS ${LINUX_DIST_VER})

USE_LINUX=	c6
USE_LINUX_RPM=	yes
USE_LINUX_APPS=	xorglibs pulseaudio-libs

RPMVERSION=	14.el6_3
USE_LDCONFIG=	yes

DOCSDIR=	${PREFIX}/usr/share/doc/pulseaudio-${PORTVERSION}
DESCR=		${PORTSDIR}/audio/pulseaudio/pkg-descr

SRC_DISTFILES=	pulseaudio-${PORTVERSION}-${RPMVERSION}${SRC_SUFX}

.include <bsd.port.mk>

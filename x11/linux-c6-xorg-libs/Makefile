# Created by: bsam
# $FreeBSD$

PORTNAME=	xorg-libs
PORTVERSION=	7.4
CATEGORIES=	x11 linux
DISTFILES=	libICE-1.0.6-1.el6.${LINUX_RPM_ARCH}.rpm \
		libSM-1.2.1-2.el6.${LINUX_RPM_ARCH}.rpm \
		libX11-1.5.0-4.el6.${LINUX_RPM_ARCH}.rpm \
		libXScrnSaver-1.2.2-2.el6.${LINUX_RPM_ARCH}.rpm \
		libXau-1.0.6-4.el6.${LINUX_RPM_ARCH}.rpm \
		libXaw-1.0.11-2.el6.${LINUX_RPM_ARCH}.rpm \
		libXcomposite-0.4.3-4.el6.${LINUX_RPM_ARCH}.rpm \
		libXcursor-1.1.13-6.20130524git8f677eaea.el6.${LINUX_RPM_ARCH}.rpm \
		libXdamage-1.1.3-4.el6.${LINUX_RPM_ARCH}.rpm \
		libXdmcp-1.1.1-3.el6.${LINUX_RPM_ARCH}.rpm \
		libXevie-1.0.3-4.el6.${LINUX_RPM_ARCH}.rpm \
		libXext-1.3.1-2.el6.${LINUX_RPM_ARCH}.rpm \
		libXfixes-5.0-3.el6.${LINUX_RPM_ARCH}.rpm \
		libXfont-1.4.5-2.el6.${LINUX_RPM_ARCH}.rpm \
		libXft-2.3.1-2.el6.${LINUX_RPM_ARCH}.rpm \
		libXi-1.6.1-3.el6.${LINUX_RPM_ARCH}.rpm \
		libXinerama-1.1.2-2.el6.${LINUX_RPM_ARCH}.rpm \
		libXmu-1.1.1-2.el6.${LINUX_RPM_ARCH}.rpm \
		libXp-1.0.0-15.1.el6.${LINUX_RPM_ARCH}.rpm \
		libXpm-3.5.10-2.el6.${LINUX_RPM_ARCH}.rpm \
		libXrandr-1.4.0-1.el6.${LINUX_RPM_ARCH}.rpm \
		libXrender-0.9.7-2.el6.${LINUX_RPM_ARCH}.rpm \
		libXres-1.0.6-2.el6.${LINUX_RPM_ARCH}.rpm \
		libXt-1.1.3-1.el6.${LINUX_RPM_ARCH}.rpm \
		libXtst-1.2.1-2.el6.${LINUX_RPM_ARCH}.rpm \
		libXv-1.0.7-2.el6.${LINUX_RPM_ARCH}.rpm \
		libXvMC-1.0.7-2.el6.${LINUX_RPM_ARCH}.rpm \
		libXxf86dga-1.1.3-2.el6.${LINUX_RPM_ARCH}.rpm \
		libXxf86misc-1.0.3-4.el6.${LINUX_RPM_ARCH}.rpm \
		libXxf86vm-1.1.2-2.el6.${LINUX_RPM_ARCH}.rpm \
		libfontenc-1.0.5-2.el6.${LINUX_RPM_ARCH}.rpm \
		libxcb-1.8.1-1.el6.${LINUX_RPM_ARCH}.rpm \
		libxkbfile-1.0.6-1.1.el6.${LINUX_RPM_ARCH}.rpm \
		mesa-libGLw-6.5.1-10.el6.${LINUX_RPM_ARCH}.rpm

.if defined(PACKAGE_BUILDING)
SRC_DISTFILES=	libICE-1.0.6-1.el6.src.rpm \
		libSM-1.2.1-2.el6.src.rpm \
		libX11-1.5.0-4.el6.src.rpm \
		libXScrnSaver-1.2.2-2.el6.src.rpm \
		libXau-1.0.6-4.el6.src.rpm \
		libXaw-1.0.11-2.el6.src.rpm \
		libXcomposite-0.4.3-4.el6.src.rpm \
		libXcursor-1.1.13-6.20130524git8f677eaea.el6.src.rpm \
		libXdamage-1.1.3-4.el6.src.rpm \
		libXdmcp-1.1.1-3.el6.src.rpm \
		libXevie-1.0.3-4.el6.src.rpm \
		libXext-1.3.1-2.el6.src.rpm \
		libXfixes-5.0-3.el6.src.rpm \
		libXfont-1.4.5-2.el6.src.rpm \
		libXft-2.3.1-2.el6.src.rpm \
		libXi-1.6.1-3.el6.src.rpm \
		libXinerama-1.1.2-2.el6.src.rpm \
		libXmu-1.1.1-2.el6.src.rpm \
		libXp-1.0.0-15.1.el6.src.rpm \
		libXpm-3.5.10-2.el6.src.rpm \
		libXrandr-1.4.0-1.el6.src.rpm \
		libXrender-0.9.7-2.el6.src.rpm \
		libXres-1.0.6-2.el6.src.rpm \
		libXt-1.1.3-1.el6.src.rpm \
		libXtst-1.2.1-2.el6.src.rpm \
		libXv-1.0.7-2.el6.src.rpm \
		libXvMC-1.0.7-2.el6.src.rpm \
		libXxf86dga-1.1.3-2.el6.src.rpm \
		libXxf86misc-1.0.3-4.el6.src.rpm \
		libXxf86vm-1.1.2-2.el6.src.rpm \
		libfontenc-1.0.5-2.el6.src.rpm \
		libxcb-1.8.1-1.el6.src.rpm \
		libxkbfile-1.0.6-1.1.el6.src.rpm \
		mesa-libGLw-6.5.1-10.el6.src.rpm

.endif

MAINTAINER=		emulation@FreeBSD.org
COMMENT=		Xorg libraries (Linux CentOS ${LINUX_DIST_VER})

CONFLICTS=		linux-xorg-libs-[0-9]* linux-f8-xorg-libs-[0-9]* linux-f10-xorg-libs-[0-9]*

USE_LINUX=	c6
USE_LINUX_APPS=		fontconfig
USE_LINUX_RPM=		yes
USE_LDCONFIG=		yes

#post-install:
#	${MKDIR} ${STAGEDIR}${PREFIX}/etc/ld.so.conf.d
#	@${INSTALL_DATA} ${FILESDIR}/xorg-x11-i386.conf ${STAGEDIR}${PREFIX}/etc/ld.so.conf.d

.include <bsd.port.mk>

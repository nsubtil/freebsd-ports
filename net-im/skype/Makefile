# Created by: netchild@FreeBSD.org
# $FreeBSD$

PORTNAME=	skype
PORTVERSION=	2.1.0.81
PORTREVISION=	1
PORTEPOCH=	1
CATEGORIES=	net-im
MASTER_SITES=	http://download.skype.com/linux/
DISTNAME=	skype_static-${DISTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	P2P VoIP software

CONFLICTS=	skype-devel-[0-9]*

OPTIONS_DEFINE=	VIDEO NVIDIA_GL
NVIDIA_GL_DESC=	libGL provided by NVidia binary drivers

OPTIONS_DEFAULT=	VIDEO

NO_BUILD=	yes

USES=		tar:bzip2
USE_LINUX=	yes
USE_LINUX_APPS+=alsalib alsa-plugins-oss expat fontconfig libasyncns \
		libsigcpp20
RESTRICTED=	Redistribution prohibited.

WRKSRC=		${WRKDIR}/${PORTNAME}_static-${DISTVERSION}
SKYPEDIR=	share/skype
PORTDOCS=	LICENSE README
PLIST_SUB+=	SKYPEDIR=${SKYPEDIR}
SUB_FILES=	skype.sh
SUB_LIST+=	SKYPEDIR=${SKYPEDIR}

.include <bsd.port.options.mk>
.include <bsd.port.pre.mk>

.if ${PORT_OPTIONS:MNVIDIA_GL}
RUN_DEPENDS+=	${LINUXBASE}/usr/lib/libGL.so.1:${PORTSDIR}/x11/nvidia-driver
USE_LINUX_APPS+=xorglibs
.else
USE_LINUX_APPS+=dri
.endif

.if ${PORT_OPTIONS:MVIDEO}
RUN_DEPENDS+=	webcamd>0:${PORTSDIR}/multimedia/webcamd
USE_LINUX_APPS+=libv4l
SUB_LIST+=	VIDEO="LD_PRELOAD=/usr/lib/libv4l/v4l2convert.so "
.else
SUB_LIST+=	VIDEO=""
.endif

### FIX ME, once they get bumped:
# for 7: 704102
# for 8: 802504
# for HEAD: 900037
# we need src/sys/dev/sound/pcm/dsp.c r221388
IGNORE_MSG=	needs sys/dev/sound/pcm/dsp.c r221388 (and other changes).\
		Please update your system post 
.if ${OSVERSION} < 704102
OUTDATED=	true
IGNORE_MSG+=	r221584 / Sat May 7 09:33:37 2011 UTC
.elif (${OSVERSION} > 800000 && ${OSVERSION} < 802503)
OUTDATED=	true
IGNORE_MSG+=	r221583 / Sat May 7 09:26:11 2011 UTC
.elif (${OSVERSION} > 900000 && ${OSVERSION} < 900036)
OUTDATED=	true
IGNORE_MSG+=	r221388 / Tue May 3 15:50:22 2011 UTC
.endif
.ifdef OUTDATED
IGNORE=	${IGNORE_MSG}
.endif

do-install:
	@${INSTALL} -d ${STAGEDIR}${PREFIX}/share/applications
	@${INSTALL_DATA} ${WRKSRC}/skype.desktop ${STAGEDIR}${PREFIX}/share/applications/
	@${INSTALL_DATA} ${WRKSRC}/icons/SkypeBlue_48x48.png ${STAGEDIR}${PREFIX}/share/pixmaps/skype.png
	@cd ${WRKSRC}/ && ${MKDIR} ${STAGEDIR}${PREFIX}/${SKYPEDIR} && ${COPYTREE_SHARE} "avatars icons sounds lang" ${STAGEDIR}${PREFIX}/${SKYPEDIR}/

# The binary main program
	@${INSTALL_PROGRAM} ${WRKSRC}/skype ${STAGEDIR}${PREFIX}/${SKYPEDIR}/

# The wrapper for main program
	@${INSTALL_SCRIPT} ${WRKDIR}/skype.sh ${STAGEDIR}${PREFIX}/bin/skype

.if ${PORT_OPTIONS:MDOCS}
	@${INSTALL} -d ${STAGEDIR}${DOCSDIR}
	@cd ${WRKSRC} && ${INSTALL_DATA} ${PORTDOCS} ${STAGEDIR}${DOCSDIR}
.endif

.include <bsd.port.post.mk>

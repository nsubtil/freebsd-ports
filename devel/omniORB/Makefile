# Created by: ejc@bazzle.com
# $FreeBSD$

PORTNAME=	omniORB
PORTVERSION=	4.2.0
CATEGORIES=	devel
MASTER_SITES=	SF/${PORTNAME:tl}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	5u623l20@gmail.com
COMMENT=	Robust high performance CORBA ORB for C++ and Python

LICENSE=	GPLv2

CONFLICTS=	omniORB41-4.1.*
PLIST_SUB+=	SONUM=${PORTVERSION:C/.*\.//}
GNU_CONFIGURE=	yes
USE_OPENSSL=	yes
USES=		gmake pkgconfig python tar:bzip2
USE_LDCONFIG=	yes
MAKEFILE=	GNUmakefile
CONFIGURE_ENV+=	PYTHON=${PYTHON_CMD}
CONFIGURE_ARGS=	--datadir=${DATADIR} --with-openssl=${OPENSSLBASE} \
		--with-omniORB-config=${PREFIX}/etc/omniORB.cfg \
		--with-omniNames-logdir=/var/log
OPTIONS_DEFINE=	DOCS EXAMPLES STATIC
OPTIONS_DEFAULT=	DOCS EXAMPLES STATIC
OPTIONS_SUB=	yes
STATIC_CONFIGURE_OFF=	--disable-static

.include <bsd.port.options.mk>
post-patch:
	@${REINPLACE_CMD} -e 's#-O2#${CFLAGS}#g' ${WRKSRC}/mk/beforeauto.mk.in
	@${REINPLACE_CMD} -e 's#%%STAGEDIR%%%%PREFIX%%#${STAGEDIR}${PREFIX}#g' \
	       	${WRKSRC}/contrib/pkgconfig/GNUmakefile.in

post-install:
	@${PYTHON_CMD} -c "import compileall; compileall.compile_dir('${STAGEDIR}${PYTHON_SITELIBDIR}/omniidl')"
	@${PYTHON_CMD} -c "import compileall; compileall.compile_dir('${STAGEDIR}${PYTHON_SITELIBDIR}/omniidl_be')"
	@cd ${WRKSRC}/man/man1 && ${INSTALL_MAN} *.1 ${STAGEDIR}${MAN1PREFIX}/man/man1
	@cd ${WRKSRC}/man/man8 && ${INSTALL_MAN} *.8 ${STAGEDIR}${MAN8PREFIX}/man/man8
.if ${PORT_OPTIONS:MDOCS}
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	@cd ${WRKSRC} && ${INSTALL_DATA} COPYING README.FIRST.txt README.unix.txt \
	 ReleaseNotes.txt ${STAGEDIR}${DOCSDIR}
	@${TAR} cCf ${WRKSRC}/doc - . | ${TAR} xUCf ${STAGEDIR}${DOCSDIR} -
.endif
.if ${PORT_OPTIONS:MEXAMPLES}
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	@${INSTALL_DATA} ${WRKSRC}/sample.cfg ${STAGEDIR}${EXAMPLESDIR}/omniORB.cfg
.endif

.include <bsd.port.mk>

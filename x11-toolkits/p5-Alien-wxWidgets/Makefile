# Created by: Cezary Morga <cm@therek.net>
# $FreeBSD$

PORTNAME=	Alien-wxWidgets
PORTVERSION=	0.65
PORTREVISION=	2
CATEGORIES=	x11-toolkits perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Perl5 module for building, finding and using wxWidgets binaries

USES=		perl5 compiler:env
USE_PERL5=	modbuild
USE_WX=		3.0
WX_COMPS=	wx
WX_UNICODE=	yes
CONFIGURE_ARGS+=	--wxWidgets-build=0 --wxWidgets-unicode=1

post-patch:
	@${REINPLACE_CMD} -e 's/wx-config/${WX_CONFIG:T}/' ${WRKSRC}/Build.PL
	@${REINPLACE_CMD} -e "s/\'wx-config/\'${WX_CONFIG:T}/" -e "s/lc_r/lpthread/" \
		${WRKSRC}/inc/My/Build/Any_wx_config.pm

post-install:
	# file name is function of wx version, add it dynamically
	@(cd ${STAGEDIR}${PREFIX}; ${FIND} * -type f -name gtk2_\* -print \
		>> ${TMPPLIST})
	
.include <bsd.port.mk>

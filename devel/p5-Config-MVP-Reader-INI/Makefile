# Created by: Geraud CONTINSOUZAS <geraud@gcu.info>
# $FreeBSD$

PORTNAME=	Config-MVP-Reader-INI
PORTVERSION=	2.101461
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	geraud@gcu.info
COMMENT=	MVP config reader for .ini files

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

RUN_DEPENDS=	p5-Config-INI>=0:${PORTSDIR}/devel/p5-Config-INI \
		p5-Config-MVP>=2:${PORTSDIR}/devel/p5-Config-MVP
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>

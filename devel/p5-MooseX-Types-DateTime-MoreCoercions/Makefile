# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD$

PORTNAME=	MooseX-Types-DateTime-MoreCoercions
PORTVERSION=	0.14
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Extensions to MooseX::Types::DateTime

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-DateTime>=0.43.02:${PORTSDIR}/devel/p5-DateTime \
		p5-DateTimeX-Easy>=0.085:${PORTSDIR}/devel/p5-DateTimeX-Easy \
		p5-Moose>=0.41:${PORTSDIR}/devel/p5-Moose \
		p5-MooseX-Types>=0.04:${PORTSDIR}/devel/p5-MooseX-Types \
		p5-MooseX-Types-DateTime>=0.06:${PORTSDIR}/devel/p5-MooseX-Types-DateTime \
		p5-Time-Duration-Parse>=0.06:${PORTSDIR}/devel/p5-Time-Duration-Parse \
		p5-namespace-clean>=0.08:${PORTSDIR}/devel/p5-namespace-clean
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-Fatal>=0:${PORTSDIR}/devel/p5-Test-Fatal \
		p5-Test-use-ok>=0.02:${PORTSDIR}/devel/p5-Test-use-ok

USE_PERL5=	modbuildtiny
USES=		perl5

.include <bsd.port.mk>

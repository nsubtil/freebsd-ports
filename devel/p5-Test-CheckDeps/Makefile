# Created by: Frederic Culot <culot@FreeBSD.org>
# $FreeBSD$

PORTNAME=	Test-CheckDeps
PORTVERSION=	0.010
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	culot@FreeBSD.org
COMMENT=	Check for presence of dependencies

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-CPAN-Meta>=2.120920:${PORTSDIR}/devel/p5-CPAN-Meta \
		p5-CPAN-Meta-Check>=0.007:${PORTSDIR}/devel/p5-CPAN-Meta-Check
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>

# Created by: Wen Heping <wen@FreeBSD.org>
# $FreeBSD$

PORTNAME=	autodie
PORTVERSION=	2.25
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Replace functions with ones that succeed or die with lexical scope

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

TEST_DEPENDS=	p5-BSD-Resource>0:${PORTSDIR}/devel/p5-BSD-Resource \
		p5-IPC-System-Simple>=0.12:${PORTSDIR}/devel/p5-IPC-System-Simple \
		p5-Sub-Identify>0:${PORTSDIR}/devel/p5-Sub-Identify

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>

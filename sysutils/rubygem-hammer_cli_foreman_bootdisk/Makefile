# Created by: Michael Moll <kvedulv@kvedulv.de>
# $FreeBSD$

PORTNAME=	hammer_cli_foreman_bootdisk
PORTVERSION=	0.1.2
CATEGORIES=	sysutils ruby
MASTER_SITES=	RG

MAINTAINER=	kvedulv@kvedulv.de
COMMENT=	Foreman bootdisk commands for Hammer CLI

LICENSE=	GPLv3

RUN_DEPENDS=	rubygem-hammer_cli_foreman>=0.1.2:${PORTSDIR}/sysutils/rubygem-hammer_cli_foreman

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.pre.mk>

post-install:
		${MKDIR} ${STAGEDIR}${PREFIX}/etc/hammer
		${MKDIR} ${STAGEDIR}${PREFIX}/etc/hammer/cli.modules.d
		${INSTALL_DATA} ${FILESDIR}/foreman_bootdisk.yml.sample ${STAGEDIR}${PREFIX}/etc/hammer/cli.modules.d/foreman_bootdisk.yml.sample

.include <bsd.port.post.mk>

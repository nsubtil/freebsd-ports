# Created by: Vaida Bogdan <vaida.bogdan@gmail.com>
# $FreeBSD$

PORTNAME=	secure_delete
PORTVERSION=	3.1
PORTREVISION=	1
CATEGORIES=	security
MASTER_SITES=	PACKETSTORM/groups/thc \
		http://freeworld.thc.org/releases/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Secure data deletion toolkit

OPTIONS_DEFINE=	DOCS

CONFLICTS=	srm-[0-9]*

MAKE_JOBS_UNSAFE=	yes

SUB_FILES=	pkg-message

PORTDOCS=	CHANGES FILES README secure_delete.doc usenix6-gutmann.doc
PLIST_FILES=	bin/sdel bin/sfill bin/smem bin/srm bin/sswap \
		bin/the_cleaner.sh man/man1/sfill.1.gz man/man1/smem.1.gz \
		man/man1/srm.1.gz man/man1/sswap.1.gz

BIN_PROGRAMS=	srm sfill sswap smem
BIN_SCRIPTS=	the_cleaner.sh

.include <bsd.port.options.mk>

post-patch:
	@${REINPLACE_CMD} -e \
		's|^CC=|CC?=| ; \
		 s|-O2 |$$(CFLAGS) | ;\
		 /strip/s|^|#|' ${WRKSRC}/Makefile

do-install:
.for i in ${BIN_PROGRAMS}
	${INSTALL_PROGRAM} ${WRKSRC}/${i} ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/${i}.1 ${STAGEDIR}${MANPREFIX}/man/man1
.endfor
.for i in ${BIN_SCRIPTS}
	${INSTALL_SCRIPT} ${WRKSRC}/${i} ${STAGEDIR}${PREFIX}/bin
.endfor
	${LN} -sf srm ${STAGEDIR}${PREFIX}/bin/sdel
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
.for i in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${i} ${STAGEDIR}${DOCSDIR}
.endfor

.include <bsd.port.mk>

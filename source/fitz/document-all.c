#include "mupdf/fitz.h"

void fz_register_document_handlers(fz_context *ctx)
{
#if FZ_ENABLE_PDF
	fz_register_document_handler(ctx, &pdf_document_handler);
#endif /* FZ_ENABLE_PDF */
#if FZ_ENABLE_XPS
	fz_register_document_handler(ctx, &xps_document_handler);
#endif /* FZ_ENABLE_XPS */
#if FZ_ENABLE_SVG
	fz_register_document_handler(ctx, &svg_document_handler);
#endif /* FZ_ENABLE_SVG */
#if FZ_ENABLE_CBZ
	fz_register_document_handler(ctx, &cbz_document_handler);
#endif /* FZ_ENABLE_CBZ */
#if FZ_ENABLE_IMG
	fz_register_document_handler(ctx, &img_document_handler);
#endif /* FZ_ENABLE_IMG */
#if FZ_ENABLE_TIFF
	fz_register_document_handler(ctx, &tiff_document_handler);
#endif /* FZ_ENABLE_TIFF */
#if FZ_ENABLE_HTML
	fz_register_document_handler(ctx, &html_document_handler);
#endif /* FZ_ENABLE_HTML */
#if FZ_ENABLE_EPUB
	fz_register_document_handler(ctx, &epub_document_handler);
#endif /* FZ_ENABLE_EPUB */
#if FZ_ENABLE_GPRF
	fz_register_document_handler(ctx, &gprf_document_handler);
#endif /* FZ_ENABLE_GPRF */
}

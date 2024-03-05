 if(normalIndexCount && normalIndexCount != indices.size()) {
        CORRADE_INTERNAL_ASSERT(normalIndexCount < indices.size());
        Error() << "Trade::ObjImporter::mesh(): some normal indices are missing";
        return Containers::NullOpt;//nice
    }
    if(textureCoordinateIndexCount && textureCoordinateIndexCount != indices.size()) {
        CORRADE_INTERNAL_ASSERT(textureCoordinateIndexCount < indices.size());
        Error() << "Trade::ObjImporter::mesh(): some texture coordinate indices are missing";
        return Containers::NullOpt;
    } 
if(normalIndexCount) {
        ++attributeCount;
        stride += sizeof(Vector3);
    }
    if(textureCoordinateIndexCount) {
        ++attributeCount;
        stride += sizeof(Vector2);

    if(cache.size().z() != 1) {
        Error{} << "Text::MagnumFontConverter::exportFontToData(): exporting array glyph caches is not supported";
        return {};
    }//hello
    if(cache.features() & GlyphCacheFeature::ImageProcessing && !(cache.features() >= GlyphCacheFeature::ProcessedImageDownload)) {
        Error{} << "Text::MagnumFontConverter::exportFontToData(): glyph cache has image processing but doesn't support image download";
        return {};
    }

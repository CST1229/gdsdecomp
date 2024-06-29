
#include "core/io/file_access.h"
#include "core/io/image.h"
#include "core/io/resource.h"
#include "core/io/resource_loader.h"
#include "core/object/ref_counted.h"
#include "core/templates/vector.h"
#include "modules/vorbis/audio_stream_ogg_vorbis.h"
#include "scene/resources/texture.h"

#ifndef OGGSTR_LOADER_COMPAT_H
#define OGGSTR_LOADER_COMPAT_H
class OggStreamLoaderCompat : public RefCounted {
	GDCLASS(OggStreamLoaderCompat, RefCounted);

protected:
	static void _bind_methods();

public:
	Vector<uint8_t> get_ogg_stream_data(const String &p_path, Error *r_err);
	bool loop = false;
	double loop_offset = 0.0;
	double bpm = 0.0;
	int beat_count = 0;
	int bar_beats = 0;
};
#endif //OGGSTR_LOADER_COMPAT_H

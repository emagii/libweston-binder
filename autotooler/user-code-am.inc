// Example code
// #if	defined(CONFIG_OPENSSL)
// 	am_use_cond("OPENSSL");
//		am_config("LIB_CFLAGS", "");
// 		am_config_add("AM_CFLAGS",	"-DUSE_SSL");
// 		am_config_add("LIB_CFLAGS",	"$(OPENSSL_CFLAGS)");
// 	am_endif();
// #endif

am_config_add("AM_CFLAGS",				"-I/usr/include/libweston-3");
am_config_add("AM_CFLAGS",				"-I/usr/include/weston");
am_config_add("AM_CFLAGS",				"-I/usr/include/libevdev-1.0");
am_config_add("AM_CFLAGS",				"-I/usr/include/pixman-1");

//am_config_add("AM_CFLAGS",				"-Iinclude/libweston-3");
//am_config_add("AM_CFLAGS",				"-Iinclude/weston");
//am_config_add("AM_CFLAGS",				"-Iinclude/libevdev-1.0");


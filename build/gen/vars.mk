APP=bt-common
APP_BIN_LIBS=
APP_CFLAGS=-DLFS_NO_DEBUG=1 -DMBEDTLS_ECP_ATCA=1 -DMBEDTLS_USER_CONFIG_FILE=\"mbedtls_platform_config.h\" -DMBEDTLS_X509_CA_CHAIN_ON_DISK=1 -DMGOS_HAVE_ATCA=1 -DMGOS_HAVE_CORE=1 -DMGOS_HAVE_I2C=1 -DMGOS_HAVE_MBEDTLS=1 -DMGOS_HAVE_MONGOOSE=1 -DMGOS_HAVE_VFS_COMMON=1 -DMGOS_HAVE_VFS_FS_LFS=1 -DMGOS_HAVE_VFS_FS_SPIFFS=1 -DMG_ENABLE_DNS=1 -DMG_ENABLE_DNS_SERVER=1 -DMG_ENABLE_MQTT=1 -DMG_ENABLE_SNTP=1 -DMG_ENABLE_SSL=1 -DMG_SSL_IF=MG_SSL_IF_MBEDTLS -DMG_SSL_IF_MBEDTLS_FREE_CERTS=1
APP_CONF_SCHEMA=/fwbuild-volumes/2.11.0/apps/bt-common/esp32/build_contexts/build_ctx_410092115/build/gen/mos_conf_schema.yml
APP_CXXFLAGS=-DLFS_NO_DEBUG=1 -DMBEDTLS_ECP_ATCA=1 -DMBEDTLS_USER_CONFIG_FILE=\"mbedtls_platform_config.h\" -DMBEDTLS_X509_CA_CHAIN_ON_DISK=1 -DMGOS_HAVE_ATCA=1 -DMGOS_HAVE_CORE=1 -DMGOS_HAVE_I2C=1 -DMGOS_HAVE_MBEDTLS=1 -DMGOS_HAVE_MONGOOSE=1 -DMGOS_HAVE_VFS_COMMON=1 -DMGOS_HAVE_VFS_FS_LFS=1 -DMGOS_HAVE_VFS_FS_SPIFFS=1 -DMG_ENABLE_DNS=1 -DMG_ENABLE_DNS_SERVER=1 -DMG_ENABLE_MQTT=1 -DMG_ENABLE_SNTP=1 -DMG_ENABLE_SSL=1 -DMG_SSL_IF=MG_SSL_IF_MBEDTLS -DMG_SSL_IF_MBEDTLS_FREE_CERTS=1
APP_FS_FILES=
APP_INCLUDES=/fwbuild-volumes/2.11.0/apps/bt-common/esp32/build_contexts/build_ctx_410092115/deps/i2c/include /fwbuild-volumes/2.11.0/apps/bt-common/esp32/build_contexts/build_ctx_410092115/deps/atca/include /fwbuild-volumes/2.11.0/apps/bt-common/esp32/build_contexts/build_ctx_410092115/deps/atca/cryptoauthlib/lib /fwbuild-volumes/2.11.0/apps/bt-common/esp32/build_contexts/build_ctx_410092115/deps/mbedtls/include /fwbuild-volumes/2.11.0/apps/bt-common/esp32/build_contexts/build_ctx_410092115/deps/mbedtls/include/esp32 /fwbuild-volumes/2.11.0/apps/bt-common/esp32/build_contexts/build_ctx_410092115/deps/mbedtls/mbedtls/include /fwbuild-volumes/2.11.0/apps/bt-common/esp32/build_contexts/build_ctx_410092115/deps/vfs-common/include /fwbuild-volumes/2.11.0/apps/bt-common/esp32/build_contexts/build_ctx_410092115/deps/vfs-common/include/esp32 /fwbuild-volumes/2.11.0/apps/bt-common/esp32/build_contexts/build_ctx_410092115/deps/mongoose/include /fwbuild-volumes/2.11.0/apps/bt-common/esp32/build_contexts/build_ctx_410092115/deps/vfs-fs-lfs/include /fwbuild-volumes/2.11.0/apps/bt-common/esp32/build_contexts/build_ctx_410092115/deps/vfs-fs-spiffs/include /fwbuild-volumes/2.11.0/apps/bt-common/esp32/build_contexts/build_ctx_410092115/deps/vfs-fs-spiffs/include/spiffs /fwbuild-volumes/2.11.0/apps/bt-common/esp32/build_contexts/build_ctx_410092115/deps/vfs-fs-spiffs/include/esp32 /fwbuild-volumes/2.11.0/apps/bt-common/esp32/build_contexts/build_ctx_410092115/deps/core/include /fwbuild-volumes/2.11.0/apps/bt-common/esp32/build_contexts/build_ctx_410092115/deps/core/include/esp32 /fwbuild-volumes/2.11.0/apps/bt-common/esp32/build_contexts/build_ctx_410092115/include /fwbuild-volumes/2.11.0/apps/bt-common/esp32/build_contexts/build_ctx_410092115/include/esp32
APP_SOURCES=/fwbuild-volumes/2.11.0/apps/bt-common/esp32/build_contexts/build_ctx_410092115/src/mgos_bt.c /fwbuild-volumes/2.11.0/apps/bt-common/esp32/build_contexts/build_ctx_410092115/src/mgos_bt_gap.c /fwbuild-volumes/2.11.0/apps/bt-common/esp32/build_contexts/build_ctx_410092115/src/mgos_bt_js.c /fwbuild-volumes/2.11.0/apps/bt-common/esp32/build_contexts/build_ctx_410092115/src/esp32/esp32_bt.c /fwbuild-volumes/2.11.0/apps/bt-common/esp32/build_contexts/build_ctx_410092115/src/esp32/esp32_bt_gap.c /fwbuild-volumes/2.11.0/apps/bt-common/esp32/build_contexts/build_ctx_410092115/src/esp32/esp32_bt_gattc.c /fwbuild-volumes/2.11.0/apps/bt-common/esp32/build_contexts/build_ctx_410092115/src/esp32/esp32_bt_gatts.c
APP_VERSION=1.1
BOARD=
BUILD_DIR=/fwbuild-volumes/2.11.0/apps/bt-common/esp32/build_contexts/build_ctx_410092115/build/objs
ESP_IDF_EXTRA_COMPONENTS= bt
ESP_IDF_SDKCONFIG_OPTS= CONFIG_SUPPORT_STATIC_ALLOCATION=y  CONFIG_BT_ENABLED=y CONFIG_BLUEDROID_ENABLED=y CONFIG_BTC_TASK_STACK_SIZE=6144 CONFIG_BLUEDROID_MEM_DEBUG= CONFIG_CLASSIC_BT_ENABLED= CONFIG_BT_DRAM_RELEASE=y CONFIG_GATTS_ENABLE=y CONFIG_GATTC_ENABLE=y CONFIG_BLE_SMP_ENABLE=y CONFIG_BT_STACK_NO_LOG= CONFIG_BT_ACL_CONNECTIONS=4 CONFIG_BTDM_CONTROLLER_RUN_CPU=0 CONFIG_SMP_ENABLE=y CONFIG_BT_RESERVE_DRAM=0x10000 
FFI_SYMBOLS=
FS_STAGING_DIR=/fwbuild-volumes/2.11.0/apps/bt-common/esp32/build_contexts/build_ctx_410092115/build/fs
FW_DIR=/fwbuild-volumes/2.11.0/apps/bt-common/esp32/build_contexts/build_ctx_410092115/build/fw
GEN_DIR=/fwbuild-volumes/2.11.0/apps/bt-common/esp32/build_contexts/build_ctx_410092115/build/gen
MANIFEST_FINAL=/fwbuild-volumes/2.11.0/apps/bt-common/esp32/build_contexts/build_ctx_410092115/build/gen/mos_final.yml
MGOS_HAVE_ATCA=1
MGOS_HAVE_CORE=1
MGOS_HAVE_I2C=1
MGOS_HAVE_MBEDTLS=1
MGOS_HAVE_MONGOOSE=1
MGOS_HAVE_VFS_COMMON=1
MGOS_HAVE_VFS_FS_LFS=1
MGOS_HAVE_VFS_FS_SPIFFS=1
MGOS_PATH=/mongoose-os
PLATFORM=esp32
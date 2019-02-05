/* clang-format off */
/*
 * Generated file - do not edit.
 * Command: /mongoose-os/fw/tools/gen_sys_config.py --c_name=mgos_config --c_global_name=mgos_sys_config --dest_dir=/fwbuild-volumes/2.11.0/apps/bt-common/esp32/build_contexts/build_ctx_410092115/build/gen/ /mongoose-os/fw/src/mgos_debug_udp_config.yaml /mongoose-os/fw/src/mgos_sys_config.yaml /mongoose-os/fw/platforms/esp32/src/esp32_sys_config.yaml /fwbuild-volumes/2.11.0/apps/bt-common/esp32/build_contexts/build_ctx_410092115/build/gen/mos_conf_schema.yml
 */

#pragma once

#include "mgos_config_util.h"

#ifdef __cplusplus
extern "C" {
#endif

struct mgos_config_debug {
  char *udp_log_addr;
  int level;
  char *filter;
  int stdout_uart;
  int stderr_uart;
  int factory_reset_gpio;
  char *mg_mgr_hexdump_file;
  int mbedtls_level;
};

struct mgos_config_device {
  char *id;
  char *license;
};

struct mgos_config_sys_mount {
  char *path;
  char *dev_type;
  char *dev_opts;
  char *fs_type;
  char *fs_opts;
};

struct mgos_config_sys_atca {
  int enable;
  int i2c_bus;
  int i2c_addr;
  int ecdh_slots_mask;
};

struct mgos_config_sys {
  struct mgos_config_sys_mount mount;
  char *tz_spec;
  int wdt_timeout;
  char *pref_ota_lib;
  struct mgos_config_sys_atca atca;
};

struct mgos_config_i2c {
  int unit_no;
  int enable;
  int freq;
  int debug;
  int sda_gpio;
  int scl_gpio;
};

struct mgos_config_bt_gatts {
  int min_sec_level;
  int require_pairing;
};

struct mgos_config_bt {
  int enable;
  char *dev_name;
  int adv_enable;
  char *scan_rsp_data_hex;
  int keep_enabled;
  int allow_pairing;
  int max_paired_devices;
  int random_address;
  int gatt_mtu;
  struct mgos_config_bt_gatts gatts;
};

struct mgos_config {
  struct mgos_config_debug debug;
  struct mgos_config_device device;
  struct mgos_config_sys sys;
  char *conf_acl;
  struct mgos_config_i2c i2c;
  struct mgos_config_i2c i2c1;
  struct mgos_config_bt bt;
};


const struct mgos_conf_entry *mgos_config_schema();

/* Parametrized accessor prototypes {{{ */
#define MGOS_CONFIG_HAVE_DEBUG
const struct mgos_config_debug *mgos_config_get_debug(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_DEBUG_UDP_LOG_ADDR
const char *mgos_config_get_debug_udp_log_addr(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_DEBUG_LEVEL
int         mgos_config_get_debug_level(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_DEBUG_FILTER
const char *mgos_config_get_debug_filter(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_DEBUG_STDOUT_UART
int         mgos_config_get_debug_stdout_uart(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_DEBUG_STDERR_UART
int         mgos_config_get_debug_stderr_uart(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_DEBUG_FACTORY_RESET_GPIO
int         mgos_config_get_debug_factory_reset_gpio(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_DEBUG_MG_MGR_HEXDUMP_FILE
const char *mgos_config_get_debug_mg_mgr_hexdump_file(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_DEBUG_MBEDTLS_LEVEL
int         mgos_config_get_debug_mbedtls_level(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_DEVICE
const struct mgos_config_device *mgos_config_get_device(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_DEVICE_ID
const char *mgos_config_get_device_id(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_DEVICE_LICENSE
const char *mgos_config_get_device_license(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_SYS
const struct mgos_config_sys *mgos_config_get_sys(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_SYS_MOUNT
const struct mgos_config_sys_mount *mgos_config_get_sys_mount(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_SYS_MOUNT_PATH
const char *mgos_config_get_sys_mount_path(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_SYS_MOUNT_DEV_TYPE
const char *mgos_config_get_sys_mount_dev_type(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_SYS_MOUNT_DEV_OPTS
const char *mgos_config_get_sys_mount_dev_opts(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_SYS_MOUNT_FS_TYPE
const char *mgos_config_get_sys_mount_fs_type(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_SYS_MOUNT_FS_OPTS
const char *mgos_config_get_sys_mount_fs_opts(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_SYS_TZ_SPEC
const char *mgos_config_get_sys_tz_spec(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_SYS_WDT_TIMEOUT
int         mgos_config_get_sys_wdt_timeout(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_SYS_PREF_OTA_LIB
const char *mgos_config_get_sys_pref_ota_lib(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_SYS_ATCA
const struct mgos_config_sys_atca *mgos_config_get_sys_atca(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_SYS_ATCA_ENABLE
int         mgos_config_get_sys_atca_enable(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_SYS_ATCA_I2C_BUS
int         mgos_config_get_sys_atca_i2c_bus(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_SYS_ATCA_I2C_ADDR
int         mgos_config_get_sys_atca_i2c_addr(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_SYS_ATCA_ECDH_SLOTS_MASK
int         mgos_config_get_sys_atca_ecdh_slots_mask(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_CONF_ACL
const char *mgos_config_get_conf_acl(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_I2C
const struct mgos_config_i2c *mgos_config_get_i2c(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_I2C_UNIT_NO
int         mgos_config_get_i2c_unit_no(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_I2C_ENABLE
int         mgos_config_get_i2c_enable(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_I2C_FREQ
int         mgos_config_get_i2c_freq(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_I2C_DEBUG
int         mgos_config_get_i2c_debug(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_I2C_SDA_GPIO
int         mgos_config_get_i2c_sda_gpio(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_I2C_SCL_GPIO
int         mgos_config_get_i2c_scl_gpio(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_I2C1
const struct mgos_config_i2c *mgos_config_get_i2c1(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_I2C1_UNIT_NO
int         mgos_config_get_i2c1_unit_no(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_I2C1_ENABLE
int         mgos_config_get_i2c1_enable(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_I2C1_FREQ
int         mgos_config_get_i2c1_freq(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_I2C1_DEBUG
int         mgos_config_get_i2c1_debug(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_I2C1_SDA_GPIO
int         mgos_config_get_i2c1_sda_gpio(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_I2C1_SCL_GPIO
int         mgos_config_get_i2c1_scl_gpio(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_BT
const struct mgos_config_bt *mgos_config_get_bt(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_BT_ENABLE
int         mgos_config_get_bt_enable(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_BT_DEV_NAME
const char *mgos_config_get_bt_dev_name(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_BT_ADV_ENABLE
int         mgos_config_get_bt_adv_enable(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_BT_SCAN_RSP_DATA_HEX
const char *mgos_config_get_bt_scan_rsp_data_hex(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_BT_KEEP_ENABLED
int         mgos_config_get_bt_keep_enabled(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_BT_ALLOW_PAIRING
int         mgos_config_get_bt_allow_pairing(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_BT_MAX_PAIRED_DEVICES
int         mgos_config_get_bt_max_paired_devices(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_BT_RANDOM_ADDRESS
int         mgos_config_get_bt_random_address(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_BT_GATT_MTU
int         mgos_config_get_bt_gatt_mtu(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_BT_GATTS
const struct mgos_config_bt_gatts *mgos_config_get_bt_gatts(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_BT_GATTS_MIN_SEC_LEVEL
int         mgos_config_get_bt_gatts_min_sec_level(struct mgos_config *cfg);
#define MGOS_CONFIG_HAVE_BT_GATTS_REQUIRE_PAIRING
int         mgos_config_get_bt_gatts_require_pairing(struct mgos_config *cfg);

void mgos_config_set_debug_udp_log_addr(struct mgos_config *cfg, const char *val);
void mgos_config_set_debug_level(struct mgos_config *cfg, int         val);
void mgos_config_set_debug_filter(struct mgos_config *cfg, const char *val);
void mgos_config_set_debug_stdout_uart(struct mgos_config *cfg, int         val);
void mgos_config_set_debug_stderr_uart(struct mgos_config *cfg, int         val);
void mgos_config_set_debug_factory_reset_gpio(struct mgos_config *cfg, int         val);
void mgos_config_set_debug_mg_mgr_hexdump_file(struct mgos_config *cfg, const char *val);
void mgos_config_set_debug_mbedtls_level(struct mgos_config *cfg, int         val);
void mgos_config_set_device_id(struct mgos_config *cfg, const char *val);
void mgos_config_set_device_license(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_mount_path(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_mount_dev_type(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_mount_dev_opts(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_mount_fs_type(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_mount_fs_opts(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_tz_spec(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_wdt_timeout(struct mgos_config *cfg, int         val);
void mgos_config_set_sys_pref_ota_lib(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_atca_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_sys_atca_i2c_bus(struct mgos_config *cfg, int         val);
void mgos_config_set_sys_atca_i2c_addr(struct mgos_config *cfg, int         val);
void mgos_config_set_sys_atca_ecdh_slots_mask(struct mgos_config *cfg, int         val);
void mgos_config_set_conf_acl(struct mgos_config *cfg, const char *val);
void mgos_config_set_i2c_unit_no(struct mgos_config *cfg, int         val);
void mgos_config_set_i2c_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_i2c_freq(struct mgos_config *cfg, int         val);
void mgos_config_set_i2c_debug(struct mgos_config *cfg, int         val);
void mgos_config_set_i2c_sda_gpio(struct mgos_config *cfg, int         val);
void mgos_config_set_i2c_scl_gpio(struct mgos_config *cfg, int         val);
void mgos_config_set_i2c1_unit_no(struct mgos_config *cfg, int         val);
void mgos_config_set_i2c1_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_i2c1_freq(struct mgos_config *cfg, int         val);
void mgos_config_set_i2c1_debug(struct mgos_config *cfg, int         val);
void mgos_config_set_i2c1_sda_gpio(struct mgos_config *cfg, int         val);
void mgos_config_set_i2c1_scl_gpio(struct mgos_config *cfg, int         val);
void mgos_config_set_bt_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_bt_dev_name(struct mgos_config *cfg, const char *val);
void mgos_config_set_bt_adv_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_bt_scan_rsp_data_hex(struct mgos_config *cfg, const char *val);
void mgos_config_set_bt_keep_enabled(struct mgos_config *cfg, int         val);
void mgos_config_set_bt_allow_pairing(struct mgos_config *cfg, int         val);
void mgos_config_set_bt_max_paired_devices(struct mgos_config *cfg, int         val);
void mgos_config_set_bt_random_address(struct mgos_config *cfg, int         val);
void mgos_config_set_bt_gatt_mtu(struct mgos_config *cfg, int         val);
void mgos_config_set_bt_gatts_min_sec_level(struct mgos_config *cfg, int         val);
void mgos_config_set_bt_gatts_require_pairing(struct mgos_config *cfg, int         val);
/* }}} */

extern struct mgos_config mgos_sys_config;

static inline bool mgos_sys_config_get(const struct mg_str key, struct mg_str *value) { return mgos_config_get(key, value, &mgos_sys_config, mgos_config_schema()); }
static inline bool mgos_sys_config_set(const struct mg_str key, const struct mg_str value, bool free_strings) { return mgos_config_set(key, value, &mgos_sys_config, mgos_config_schema(), free_strings); }

#define MGOS_SYS_CONFIG_HAVE_DEBUG
static inline const struct mgos_config_debug *mgos_sys_config_get_debug(void) { return mgos_config_get_debug(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_DEBUG_UDP_LOG_ADDR
static inline const char *mgos_sys_config_get_debug_udp_log_addr(void) { return mgos_config_get_debug_udp_log_addr(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_DEBUG_LEVEL
static inline int         mgos_sys_config_get_debug_level(void) { return mgos_config_get_debug_level(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_DEBUG_FILTER
static inline const char *mgos_sys_config_get_debug_filter(void) { return mgos_config_get_debug_filter(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_DEBUG_STDOUT_UART
static inline int         mgos_sys_config_get_debug_stdout_uart(void) { return mgos_config_get_debug_stdout_uart(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_DEBUG_STDERR_UART
static inline int         mgos_sys_config_get_debug_stderr_uart(void) { return mgos_config_get_debug_stderr_uart(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_DEBUG_FACTORY_RESET_GPIO
static inline int         mgos_sys_config_get_debug_factory_reset_gpio(void) { return mgos_config_get_debug_factory_reset_gpio(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_DEBUG_MG_MGR_HEXDUMP_FILE
static inline const char *mgos_sys_config_get_debug_mg_mgr_hexdump_file(void) { return mgos_config_get_debug_mg_mgr_hexdump_file(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_DEBUG_MBEDTLS_LEVEL
static inline int         mgos_sys_config_get_debug_mbedtls_level(void) { return mgos_config_get_debug_mbedtls_level(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_DEVICE
static inline const struct mgos_config_device *mgos_sys_config_get_device(void) { return mgos_config_get_device(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_DEVICE_ID
static inline const char *mgos_sys_config_get_device_id(void) { return mgos_config_get_device_id(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_DEVICE_LICENSE
static inline const char *mgos_sys_config_get_device_license(void) { return mgos_config_get_device_license(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_SYS
static inline const struct mgos_config_sys *mgos_sys_config_get_sys(void) { return mgos_config_get_sys(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_SYS_MOUNT
static inline const struct mgos_config_sys_mount *mgos_sys_config_get_sys_mount(void) { return mgos_config_get_sys_mount(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_SYS_MOUNT_PATH
static inline const char *mgos_sys_config_get_sys_mount_path(void) { return mgos_config_get_sys_mount_path(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_SYS_MOUNT_DEV_TYPE
static inline const char *mgos_sys_config_get_sys_mount_dev_type(void) { return mgos_config_get_sys_mount_dev_type(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_SYS_MOUNT_DEV_OPTS
static inline const char *mgos_sys_config_get_sys_mount_dev_opts(void) { return mgos_config_get_sys_mount_dev_opts(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_SYS_MOUNT_FS_TYPE
static inline const char *mgos_sys_config_get_sys_mount_fs_type(void) { return mgos_config_get_sys_mount_fs_type(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_SYS_MOUNT_FS_OPTS
static inline const char *mgos_sys_config_get_sys_mount_fs_opts(void) { return mgos_config_get_sys_mount_fs_opts(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_SYS_TZ_SPEC
static inline const char *mgos_sys_config_get_sys_tz_spec(void) { return mgos_config_get_sys_tz_spec(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_SYS_WDT_TIMEOUT
static inline int         mgos_sys_config_get_sys_wdt_timeout(void) { return mgos_config_get_sys_wdt_timeout(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_SYS_PREF_OTA_LIB
static inline const char *mgos_sys_config_get_sys_pref_ota_lib(void) { return mgos_config_get_sys_pref_ota_lib(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_SYS_ATCA
static inline const struct mgos_config_sys_atca *mgos_sys_config_get_sys_atca(void) { return mgos_config_get_sys_atca(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_SYS_ATCA_ENABLE
static inline int         mgos_sys_config_get_sys_atca_enable(void) { return mgos_config_get_sys_atca_enable(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_SYS_ATCA_I2C_BUS
static inline int         mgos_sys_config_get_sys_atca_i2c_bus(void) { return mgos_config_get_sys_atca_i2c_bus(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_SYS_ATCA_I2C_ADDR
static inline int         mgos_sys_config_get_sys_atca_i2c_addr(void) { return mgos_config_get_sys_atca_i2c_addr(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_SYS_ATCA_ECDH_SLOTS_MASK
static inline int         mgos_sys_config_get_sys_atca_ecdh_slots_mask(void) { return mgos_config_get_sys_atca_ecdh_slots_mask(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_CONF_ACL
static inline const char *mgos_sys_config_get_conf_acl(void) { return mgos_config_get_conf_acl(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_I2C
static inline const struct mgos_config_i2c *mgos_sys_config_get_i2c(void) { return mgos_config_get_i2c(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_I2C_UNIT_NO
static inline int         mgos_sys_config_get_i2c_unit_no(void) { return mgos_config_get_i2c_unit_no(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_I2C_ENABLE
static inline int         mgos_sys_config_get_i2c_enable(void) { return mgos_config_get_i2c_enable(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_I2C_FREQ
static inline int         mgos_sys_config_get_i2c_freq(void) { return mgos_config_get_i2c_freq(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_I2C_DEBUG
static inline int         mgos_sys_config_get_i2c_debug(void) { return mgos_config_get_i2c_debug(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_I2C_SDA_GPIO
static inline int         mgos_sys_config_get_i2c_sda_gpio(void) { return mgos_config_get_i2c_sda_gpio(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_I2C_SCL_GPIO
static inline int         mgos_sys_config_get_i2c_scl_gpio(void) { return mgos_config_get_i2c_scl_gpio(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_I2C1
static inline const struct mgos_config_i2c *mgos_sys_config_get_i2c1(void) { return mgos_config_get_i2c1(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_I2C1_UNIT_NO
static inline int         mgos_sys_config_get_i2c1_unit_no(void) { return mgos_config_get_i2c1_unit_no(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_I2C1_ENABLE
static inline int         mgos_sys_config_get_i2c1_enable(void) { return mgos_config_get_i2c1_enable(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_I2C1_FREQ
static inline int         mgos_sys_config_get_i2c1_freq(void) { return mgos_config_get_i2c1_freq(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_I2C1_DEBUG
static inline int         mgos_sys_config_get_i2c1_debug(void) { return mgos_config_get_i2c1_debug(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_I2C1_SDA_GPIO
static inline int         mgos_sys_config_get_i2c1_sda_gpio(void) { return mgos_config_get_i2c1_sda_gpio(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_I2C1_SCL_GPIO
static inline int         mgos_sys_config_get_i2c1_scl_gpio(void) { return mgos_config_get_i2c1_scl_gpio(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_BT
static inline const struct mgos_config_bt *mgos_sys_config_get_bt(void) { return mgos_config_get_bt(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_BT_ENABLE
static inline int         mgos_sys_config_get_bt_enable(void) { return mgos_config_get_bt_enable(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_BT_DEV_NAME
static inline const char *mgos_sys_config_get_bt_dev_name(void) { return mgos_config_get_bt_dev_name(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_BT_ADV_ENABLE
static inline int         mgos_sys_config_get_bt_adv_enable(void) { return mgos_config_get_bt_adv_enable(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_BT_SCAN_RSP_DATA_HEX
static inline const char *mgos_sys_config_get_bt_scan_rsp_data_hex(void) { return mgos_config_get_bt_scan_rsp_data_hex(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_BT_KEEP_ENABLED
static inline int         mgos_sys_config_get_bt_keep_enabled(void) { return mgos_config_get_bt_keep_enabled(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_BT_ALLOW_PAIRING
static inline int         mgos_sys_config_get_bt_allow_pairing(void) { return mgos_config_get_bt_allow_pairing(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_BT_MAX_PAIRED_DEVICES
static inline int         mgos_sys_config_get_bt_max_paired_devices(void) { return mgos_config_get_bt_max_paired_devices(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_BT_RANDOM_ADDRESS
static inline int         mgos_sys_config_get_bt_random_address(void) { return mgos_config_get_bt_random_address(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_BT_GATT_MTU
static inline int         mgos_sys_config_get_bt_gatt_mtu(void) { return mgos_config_get_bt_gatt_mtu(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_BT_GATTS
static inline const struct mgos_config_bt_gatts *mgos_sys_config_get_bt_gatts(void) { return mgos_config_get_bt_gatts(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_BT_GATTS_MIN_SEC_LEVEL
static inline int         mgos_sys_config_get_bt_gatts_min_sec_level(void) { return mgos_config_get_bt_gatts_min_sec_level(&mgos_sys_config); }
#define MGOS_SYS_CONFIG_HAVE_BT_GATTS_REQUIRE_PAIRING
static inline int         mgos_sys_config_get_bt_gatts_require_pairing(void) { return mgos_config_get_bt_gatts_require_pairing(&mgos_sys_config); }

static inline void mgos_sys_config_set_debug_udp_log_addr(const char *val) { mgos_config_set_debug_udp_log_addr(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_level(int         val) { mgos_config_set_debug_level(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_filter(const char *val) { mgos_config_set_debug_filter(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_stdout_uart(int         val) { mgos_config_set_debug_stdout_uart(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_stderr_uart(int         val) { mgos_config_set_debug_stderr_uart(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_factory_reset_gpio(int         val) { mgos_config_set_debug_factory_reset_gpio(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_mg_mgr_hexdump_file(const char *val) { mgos_config_set_debug_mg_mgr_hexdump_file(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_mbedtls_level(int         val) { mgos_config_set_debug_mbedtls_level(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_device_id(const char *val) { mgos_config_set_device_id(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_device_license(const char *val) { mgos_config_set_device_license(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_mount_path(const char *val) { mgos_config_set_sys_mount_path(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_mount_dev_type(const char *val) { mgos_config_set_sys_mount_dev_type(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_mount_dev_opts(const char *val) { mgos_config_set_sys_mount_dev_opts(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_mount_fs_type(const char *val) { mgos_config_set_sys_mount_fs_type(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_mount_fs_opts(const char *val) { mgos_config_set_sys_mount_fs_opts(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_tz_spec(const char *val) { mgos_config_set_sys_tz_spec(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_wdt_timeout(int         val) { mgos_config_set_sys_wdt_timeout(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_pref_ota_lib(const char *val) { mgos_config_set_sys_pref_ota_lib(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_atca_enable(int         val) { mgos_config_set_sys_atca_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_atca_i2c_bus(int         val) { mgos_config_set_sys_atca_i2c_bus(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_atca_i2c_addr(int         val) { mgos_config_set_sys_atca_i2c_addr(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_atca_ecdh_slots_mask(int         val) { mgos_config_set_sys_atca_ecdh_slots_mask(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_conf_acl(const char *val) { mgos_config_set_conf_acl(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_i2c_unit_no(int         val) { mgos_config_set_i2c_unit_no(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_i2c_enable(int         val) { mgos_config_set_i2c_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_i2c_freq(int         val) { mgos_config_set_i2c_freq(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_i2c_debug(int         val) { mgos_config_set_i2c_debug(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_i2c_sda_gpio(int         val) { mgos_config_set_i2c_sda_gpio(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_i2c_scl_gpio(int         val) { mgos_config_set_i2c_scl_gpio(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_i2c1_unit_no(int         val) { mgos_config_set_i2c1_unit_no(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_i2c1_enable(int         val) { mgos_config_set_i2c1_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_i2c1_freq(int         val) { mgos_config_set_i2c1_freq(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_i2c1_debug(int         val) { mgos_config_set_i2c1_debug(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_i2c1_sda_gpio(int         val) { mgos_config_set_i2c1_sda_gpio(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_i2c1_scl_gpio(int         val) { mgos_config_set_i2c1_scl_gpio(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_bt_enable(int         val) { mgos_config_set_bt_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_bt_dev_name(const char *val) { mgos_config_set_bt_dev_name(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_bt_adv_enable(int         val) { mgos_config_set_bt_adv_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_bt_scan_rsp_data_hex(const char *val) { mgos_config_set_bt_scan_rsp_data_hex(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_bt_keep_enabled(int         val) { mgos_config_set_bt_keep_enabled(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_bt_allow_pairing(int         val) { mgos_config_set_bt_allow_pairing(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_bt_max_paired_devices(int         val) { mgos_config_set_bt_max_paired_devices(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_bt_random_address(int         val) { mgos_config_set_bt_random_address(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_bt_gatt_mtu(int         val) { mgos_config_set_bt_gatt_mtu(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_bt_gatts_min_sec_level(int         val) { mgos_config_set_bt_gatts_min_sec_level(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_bt_gatts_require_pairing(int         val) { mgos_config_set_bt_gatts_require_pairing(&mgos_sys_config, val); }

#ifdef __cplusplus
}
#endif

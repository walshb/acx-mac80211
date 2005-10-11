/* temporary hack until proper Kconfig integration */
#define CONFIG_ACX_PCI 1
#define CONFIG_ACX_USB 1

#define WLAN_RELEASE "v0.3.12"

/* set to 0 if you don't want any debugging code to be compiled in */
/* set to 1 if you want some debugging */
/* set to 2 if you want extensive debug log */
#define ACX_DEBUG 2

/* assume 32bit I/O width
 * (16bit is also compatible with Compact Flash) */
#define ACX_IO_WIDTH 32

/* Set this to 1 if you want monitor mode to use
 * phy header. Currently it is not useful anyway since we
 * don't know what useful info (if any) is in phy header.
 * If you want faster/smaller code, say 0 here */
#define WANT_PHY_HDR 0

/* whether to do Tx descriptor cleanup in softirq (i.e. not in IRQ
 * handler) or not. Note that doing it later does slightly increase
 * system load, so still do that stuff in the IRQ handler for now,
 * even if that probably means worse latency */
#define TX_CLEANUP_IN_SOFTIRQ 0

/* set to 1 if you want to have 1 driver per card instead of 1 single driver
 * managing all cards (of a particular bus type) in your system
 * Useful e.g. if you need to reinitialize single cards from time to time
 * LINUX 2.4.X ONLY!! (pci_for_each_dev()) Feel free to implement 2.6.x
 * compatibility... */
#define SEPARATE_DRIVER_INSTANCES 0

/* Locking: */
/* very talkative */
#define PARANOID_LOCKING 1
/* normal (use when bug-free) */
/* #define DO_LOCKING 1 */
/* else locking is disabled! */

/* 0 - normal mode */
/* 1 - development/debug: probe for IEs on modprobe */
#define CMD_DISCOVERY 0

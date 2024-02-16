DESCRIPTION = "PHY Linux Kernel Recipe"

LICENSE = "MIT"

LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

inherit kernel

SRC_URI = "git://git.kernel.org/pub/scm/linux/kernel/git/torvalds/linux.git;protocol=git; \
           file://defconfig"
           
SRCREV = "${AUTOREV}"

S = "${WORKDIR}/git"


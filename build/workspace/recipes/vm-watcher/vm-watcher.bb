# Recipe created by recipetool
# This is the basis of a recipe and may need further editing in order to be fully functional.
# (Feel free to remove these comments when editing.)

# Unable to find any files that looked like license statements. Check the accompanying
# documentation and source headers and set LICENSE and LIC_FILES_CHKSUM accordingly.
#
# NOTE: LICENSE is being set to "CLOSED" to allow you to at least start building - if
# this is not accurate with respect to the licensing of the software being built (it
# will not be in most cases) you must specify the correct value before using this
# recipe for anything other than initial testing/development!
LICENSE = "CLOSED"
LIC_FILES_CHKSUM = ""

# No information for SRC_URI yet (only an external source tree was specified)
SRC_URI = ""

# NOTE: this is a Makefile-only piece of software, so we cannot generate much of the
# recipe automatically - you will need to examine the Makefile yourself and ensure
# that the appropriate arguments are passed in.

#do_configure () {
#}

EXTRA_OEMAKE = " 'CC=${CC}' 'CFLAGS=${CFLAGS} -I${S}/include' 'LDFLAGS=${LDFLAGS}' "

# Makefile 있는 곳에서 complie 진행
do_compile () {
	oe_runmake
}

# ${S}: devtool이 인식한 소스 폴더 ..../vmwatcher
# ${D}: 빌드된 파일 모아둠
# ${bindir}: /usr/bin
do_install () {
        install -d ${D}${bindir}
        install -m 0755 ${S}/vmwatcher ${D}${bindir}
}


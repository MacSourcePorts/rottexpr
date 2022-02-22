# game/app specific values
export APP_VERSION="1.0"
export ICONSDIR="icons"
export ICONSFILENAME="rott"
export PRODUCT_NAME="rottexpr"
export EXECUTABLE_NAME="rott"
export PKGINFO="APPLROTT"
export COPYRIGHT_TEXT="Rise of the Triad © 1995 3D Realms. All rights reserved."

#constants
source ../MSPScripts/constants.sh

rm -rf ${BUILT_PRODUCTS_DIR}

rm -rf ${X86_64_BUILD_FOLDER}
mkdir ${X86_64_BUILD_FOLDER}
rm -rf ${ARM64_BUILD_FOLDER}
mkdir ${ARM64_BUILD_FOLDER}

cd src
make clean
(CFLAGS="-I/opt/homebrew/include/ -arch arm64" LDFLAGS="-L/opt/homebrew/lib/" make -j$NCPU) || exit 1;
cd ..
mkdir -p ${X86_64_BUILD_FOLDER}/"${EXECUTABLE_FOLDER_PATH}"
mv src/"${EXECUTABLE_NAME}" ${X86_64_BUILD_FOLDER}/"${EXECUTABLE_FOLDER_PATH}"

cd src
make clean
(CFLAGS="-I/usr/local/include/ -arch x86_64" LDFLAGS="-L/usr/local/lib/" make -j$NCPU) || exit 1;
cd ..
mkdir -p ${ARM64_BUILD_FOLDER}/"${EXECUTABLE_FOLDER_PATH}"
mv src/"${EXECUTABLE_NAME}" ${ARM64_BUILD_FOLDER}/"${EXECUTABLE_FOLDER_PATH}"

# create the app bundle
"../MSPScripts/build_app_bundle.sh"

#sign and notarize
"../MSPScripts/sign_and_notarize.sh" "$1"
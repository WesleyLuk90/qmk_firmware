set -e

pushd bin
./qmk compile-json ../keyboards/wesv1/default.json
popd
make wesv1/default

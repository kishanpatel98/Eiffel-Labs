#!/bin/bash

OS="`uname`"
echo $OS
# need spaces in condition
if [ "$OS" = "Darwin" ]; then
    export ISE_EIFFEL=/usr/local/Eiffel_17.05
	export ISE_PLATFORM=macosx-x86-64
	export MATHMODELS=/Volumes/Lacie3TB/SVN/sel-open/mathmodels
	export GOBO=$ISE_EIFFEL/library/gobo/spec/$ISE_PLATFORM/bin
	export PATH=$PATH:$ISE_EIFFEL/studio/spec/$ISE_PLATFORM/bin:$GOBO
elif [ "$OS" = "Linux" ]; then
	export ISE_EIFFEL=`ise_eiffel`
	export ISE_PLATFORM=linux-x86-64
	export MATHMODELS=/cs/fac/share/sel/mathmodels
	export GOBO=$ISE_EIFFEL/library/gobo/spec/$ISE_PLATFORM/bin
	export PATH=$PATH:$ISE_EIFFEL/studio/spec/$ISE_PLATFORM/bin:$GOBO
else
	echo "problem ..."
fi
echo $ISE_EIFFEL
echo $GOBO
gelex


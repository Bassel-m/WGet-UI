#!/usr/bin/env bash
link=$(cat ./.tmp)
rm -f ./.tmp
cd ~
echo "============================================================================="
echo "Your File will be saved in your home directory .. Thanks :D"
echo "============================================================================="
wget -c $link

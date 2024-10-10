#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "BlankChainPlugin.h"

void BlankChainPlugin::input(std::string file) {
 inputfile = file;
}

void BlankChainPlugin::run() {}

void BlankChainPlugin::output(std::string file) {
 std::string outputfile = file;
myCommand += "pdb_blank_chain";
myCommand += " ";
myCommand += inputfile + " > ";
myCommand += outputfile + " ";
 system(myCommand.c_str());
}

PluginProxy<BlankChainPlugin> BlankChainPluginProxy = PluginProxy<BlankChainPlugin>("BlankChain", PluginManager::getInstance());

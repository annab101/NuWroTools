#include "GSimpleTree.h"

void convert_flux() {

	TString t = ".L GSimpleTree.C;";
	gROOT->ProcessLine(t);

	gSystem->Load("GSimpleTree_C.so");

	string pattern="root://fndca1.fnal.gov:1094/pnfs/fnal.gov/usr/sbnd/persistent/stash/fluxFiles/bnb/BooNEtoGSimple/configK-v1/july2023/neutrinoMode/gsimple_april07_baseline_*_redecay_wkaonwgh.root";
	TChain *cflux = new TChain("flux");
	cflux->Add(pattern.c_str());
	int Nfiles = cflux->GetNtrees();
	cout << "Number of files: " << Nfiles << endl;
	GSimpleTree *gsimple = new GSimpleTree(cflux);
	gsimple->Loop();
	cout << "Done." << endl;

}

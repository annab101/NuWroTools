void make_gsimple_class() {

    TFile *f = new TFile("/pnfs/sbnd/persistent/users/abeever/xsec/flux/SBNDtotalFluxConfigK.root");
    TTree *v = (TTree*)f->Get("flux");
    v->MakeClass("gsimpletree");
}

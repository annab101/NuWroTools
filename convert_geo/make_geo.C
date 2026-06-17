void make_geo() {

  gSystem->Load("libGeom");
  TGeoManager::Import("/pnfs/sbnd/persistent/users/abeever/xsec/geo/sbnd_v02_03.gdml");
  // gGeoManager->GetTopVolume()->Draw("ogl");
  gGeoManager->Export("/pnfs/sbnd/persistent/users/abeever/xsec/geo/sbnd_v02_03_NuWro.root", "SBNDGeometry");
}


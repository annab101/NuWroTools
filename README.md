# NuWroTools

To run for SBND on SBND gpvms: 

## Changing flux to NuWro format

In `convert_flux`:

```
root -b
.L GSimpleTree.C+
```

then 

```
convert_flux.py
```

Remember to change the paths of the flux files and output files to the ones you need for your work.

## Changing geometry to NuWro format

In `convert_geo`:

```
root make_geo.C
```

Remember to change the paths of the geometry files and output files to the ones you need for your work.

## Running NuWro

Instructions for running NuWro are [here](https://nuwro.github.io/user-guide/getting-started/running/). To use SBND flux and geometry you want `beam_type = 2` and `target_type = 2` in your parameters list, and then you'll be able to provide the path to the converted flux and geometry files you made.

## Converting NuWro to artroot

Two steps: convert NuWro to hepmc, then hepmc to artroot.


In `convert_hepmc`:

```
root 'nuwro_to_hepmc_bnb.C(<indir>, <nuwrofile>, <outdir>, <eventsperfile>)'
```

Then to convert the hepmc to artroot: in your favourite sbndcode environment, you want a fcl like [this one](https://github.com/SBNSoftware/sbndcode/blob/feature/abeever_nuclearClusters/sbndcode/EventGenerator/HepMC/prodhepmc_nuwro_sbnd.fcl).



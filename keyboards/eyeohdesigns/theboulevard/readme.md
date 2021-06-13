## 13 June 2021 Commit
The Case Files folder has been added. At this point I'm going to stop pretending I can do only one portion of this keyboard. Yesterday I ordered all of the case files and the updated PCB that fixes the JST pinout. I'll test the full build once everything arrives.

Both of the STLs required modifications in some way.

The top piece now has a slightly larger cutout for the encoder to prevent rubbing. The cutout for the keys on the bottom part of the board weren't perfectly lined up with the top portion of the board, so I fixed that as well.

The bottom piece was modified from the files Royal posted to add physical compatibility with the unified daughterboard.

## 25 May 2021 Commit
The JST for the unified daughterboard was reversed. This commit fixes that issue and brings the PCB into compliance with the UDB spec.

## Items tested:

All keys tested.

Encoder functionality.

RGB. I used the standard footprint in Kicad for the through hole RGB. When I wired up the RGB I got off Amazon (which didn't have a datasheet) it was in reverse. Once I flipped the RGB, everything worked fine. Be sure to check the datasheet on your light before installing.

## Items I do not intend to test in the near future:

Compatibility with the open source plate. I know that these PCBs fit in the case, but I don't have the time or resources to ensure everything lines up on the plate. I did take some measurements when initially staarting this project, and noticed that although the case had .5u spacing between the left most column and the main key cluster, at least one of the switch plates did not have this spacing. The PCB I designed uses .5u spacing between the left most column and the main key cluster.

## Known issues:

None at this time.

## Future plans:

The through-hole RGB The_Royal designed this PCB to work with is expensive and can't easily be found in bulk. I'll be looking into changing the top PCB to use SMT RGB with a light pipe.

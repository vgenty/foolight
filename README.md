# foolight
Forked from https://github.com/larlight/larlite by kazuhiro@nevis.columbia.edu

Vic's attempt to understand custom data product with Kazu's analysis framework, especially storage_manager singleton class.

I removed all the data products except track.h, test with core/DataFormat/bin/simple_write and core/DataFormat/bin/simple_read then play with ana_processor derived instance.

### notes
- When creating new dataproduct file, foolight_id tree must be set with valid event, run and subrun id and must (maybe?) match data products ids.

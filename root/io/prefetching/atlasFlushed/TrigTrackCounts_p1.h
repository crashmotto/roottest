//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Tue Jun 14 15:33:00 2011 by ROOT version 5.31/01)
//      from the StreamerInfo in file http://root.cern.ch/files/atlasFlushed.root
//////////////////////////////////////////////////////////


#ifndef TrigTrackCounts_p1_h
#define TrigTrackCounts_p1_h
class TrigTrackCounts_p1;

#include "Riostream.h"
#include <vector>

class TrigTrackCounts_p1 {

public:
// Nested classes declaration.

public:
// Data Members.
   vector<float> m_z0pcnt;    //
   vector<float> m_phi0cnt;    //
   vector<float> m_etacnt;     //
   vector<float> m_ptcnt;      //
   int           m_trkcnt;     //
   int           m_pixcnt;     //
   int           m_sctcnt;     //

   TrigTrackCounts_p1();
   TrigTrackCounts_p1(const TrigTrackCounts_p1 & );
   virtual ~TrigTrackCounts_p1();

};
#endif

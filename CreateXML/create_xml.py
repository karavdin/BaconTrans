#!/cvmfs/cms.cern.ch/slc6_amd64_gcc491/cms/cmssw-patch/CMSSW_7_4_6_patch5/external/slc6_amd64_gcc491/bin/python

import sys, glob

if len(sys.argv) != 3:
   print "Usage: %s <pattern with full path> <xml filename>"
   sys.exit(1)

pattern = sys.argv[1]
out = open(sys.argv[2], 'w')
l = glob.glob(pattern)
print "found %d files matching pattern" % len(l)
l.sort()
for file in l:
    out.write('<In FileName="%s" Lumi="0.0"/>\n' % file)
out.close()


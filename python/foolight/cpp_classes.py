from colored_msg import warning, error, info
import ROOT
orig_level = ROOT.gErrorIgnoreLevel
ROOT.gErrorIgnoreLevel = ROOT.kFatal

libs = [ 'libFoolight_Analysis',
         'libFoolight_DataFormat',
         #'libFoolight_LArUtil',
         'libFoolight_Base']
for l in libs:
    val = ROOT.gSystem.Load(l)
    if val < 0:
        warning('Skipping %s' % l)
    #else:
    #    info('%s %s' % (val,l))
ROOT.gErrorIgnoreLevel = orig_level

try:
    ROOT.foolight
    #ROOT.larutil
except AttributeError:
    error('No Foolight core library loaded!')
    raise
from ROOT import foolight#,larutil



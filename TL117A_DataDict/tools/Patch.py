filename = 'Output/CalComponent.arxml'

# Read the original file
with open(filename) as file:
    contents = file.read()

# Patching happens here
contents = contents.replace('/Nexteer/Calibrations', '/DataDictionary/Calibrations')
contents = contents.replace('_uint8_', '_u8_')

# Write changed file back out - simply overwrites the original
with open(filename, 'w+') as file:
    file.write(contents)
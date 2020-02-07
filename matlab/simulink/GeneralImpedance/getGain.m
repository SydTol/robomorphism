function gain = getGain(output, input)

gain = max(abs(getHalfArray(output)))/max(abs(getHalfArray(input)));

end


function half_array = getHalfArray(array)
    
    sizeArray = size(array);
    half = round(sizeArray(1)/2);
    half_array = array(half:end);
end


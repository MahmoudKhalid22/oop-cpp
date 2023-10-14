### passing objects as parameters to methods

if you implemented a class that you make like a new data type

Distance addFeet(Distance d); // in .h file

Distance::Distance addFeet(Distance d){
Distance result;

result.feet = feet + d.feet;
result.inch = inch + d.inch; // in .cpp file

return result;
}

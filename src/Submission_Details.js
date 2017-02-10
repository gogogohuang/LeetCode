/**
 * @param {number[][]} grid
 * @return {number}
 */
var islandPerimeter = function(grid) {
    var cnt=0, repeat=0;
    for(var i=0; i<grid.length; i++){
        for(var j=0; j<grid[i].length; j++){
            if(grid[i][j]===1){
                cnt++;
                if((j<(grid[i].length-1)) && (grid[i][j+1])===1){
                    repeat++;
                }
                if((i<(grid.length-1)) && (grid[i+1][j]===1)){
                    repeat++;
                }
            }
        }
    }
    return (4*cnt-2*repeat);
};
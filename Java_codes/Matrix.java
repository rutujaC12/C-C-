//Mtarix addition , subtraction and multiplication

class Matrix 
{
    private int[][] data;
    private int rows;
    private int cols;

    public Matrix(int[][] matrixData) 
    {
       rows = matrixData.length;
        cols = matrixData.length;
        data = new int[rows][cols];

        for (int i = 0; i < rows; i++) 
		{
            for (int j = 0; j < cols; j++) 
	    	 {
                data[i][j] = matrixData[i][j];
            }
        }
    }

    public Matrix add(Matrix m) 
    {
        int[][] resultData = new int[rows][cols];
        for (int i = 0; i < rows; i++) 
 		{
            for (int j = 0; j < cols; j++) 
	    	 {
                resultData[i][j] = data[i][j] + m.data[i][j];
            }
        }
        return new Matrix(resultData);
    }

	public Matrix sub(Matrix m) 
    {
        int[][] resultData = new int[rows][cols];
        for (int i = 0; i < rows; i++) 
 		{
            for (int j = 0; j < cols; j++) 
	    	 {
                resultData[i][j] = data[i][j] - m.data[i][j];
            }
        }
        return new Matrix(resultData);
    }

	public Matrix mult(Matrix m) 
    {
        int[][] resultData = new int[rows][cols];
        for (int i = 0; i < rows; i++) 
 		{
            for (int j = 0; j < cols; j++) 
			{
				for (int k = 0; k < rows; k++)
				{
					resultData[i][j] += data[i][k] * m.data[k][j];
				}
			}
        }
        return new Matrix(resultData);
    }

    public void print() 
    {
        for (int i = 0; i < rows; i++) 
  		 {
			for (int j = 0; j < cols; j++) 
		 	{
				System.out.print(data[i][j] + " ");
			}
            System.out.println();
        }
    }

    public static void main(String[] args)
   	{
        int[][] matrix1Data = {	{1, 2, 3}, 
									{4, 5, 6},
									{7, 8, 9} };

        int[][] matrix2Data = {	{9, 8, 7}, 
									{6, 5, 4},
									{3, 2, 1} };

        Matrix matrix1 = new Matrix(matrix1Data);
        Matrix matrix2 = new Matrix(matrix2Data);

        System.out.println("Matrix 1:");
        matrix1.print();

        System.out.println("Matrix 2:");
        matrix2.print();

        Matrix resultAdd = matrix1.add(matrix2);
        System.out.println("Matrix Addition Result:");
		resultAdd.print();

		 Matrix resultSub = matrix2.sub(matrix1);
        System.out.println("Matrix Subtraction Result:");
        resultSub.print();

		 Matrix resultMult = matrix1.mult(matrix2);
        System.out.println("Matrix Multiplication Result:");
        resultMult.print();
    }
}

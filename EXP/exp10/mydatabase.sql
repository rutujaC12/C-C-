-- Create a database named 'mydatabase' if it doesn't exist
-- CREATE DATABASE IF NOT EXISTS mydatabase;

-- Use the 'mydatabase' database
USE mydatabase;

-- Create a table named 'users' to store user information
CREATE TABLE IF NOT EXISTS users (
    id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(50) NOT NULL,
    email VARCHAR(50) NOT NULL
);

-- Insert sample data into the 'users' table
INSERT INTO users (name, email) VALUES ('John Doe', 'john@example.com');
INSERT INTO users (name, email) VALUES ('Jane Smith', 'jane@example.com');

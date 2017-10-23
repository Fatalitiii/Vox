#ifndef IBLOCK_H
#define IBLOCK_H

#include <iostream>
#include <string>

class IBlock {
public:
	/**
		Instantuate the block
		@param modID The mod name.
		@param unlocalName The unlocalized name of the block.
	*/
	IBlock(std::string modID, std::string unlocalName);

	/**
		Instantuate the block
		@param modID The mod name.
		@param unlocalName The unlocalized name of the block.
		@param resourcePath The location of where the resource is saved.
	*/
	IBlock(std::string modID, std::string unlocalName, std::string resourcePath);

	/**
		Gets whether the block is visible or not.
		@return The true or false.
	*/
	virtual bool isVisible();

	/**
		Gets whether the block is collidable or not.
		@return The true or false.
	*/
	virtual bool isCollidable();

	/**
		Gets the IBlockState of the block.
		@param meta The blocks current meta value.
		@return IBlockState of the block.
	*/
	virtual int getStateFromMeta(int meta);

	/**
		Set the default state of the block that will default if
		any errors occure.
		@param meta The blocks default state.
	*/
	virtual void setDefaultState(int meta); // TODO: change int meta to IBlockState when complete

	/**
		Gets the name of the block.
		@return The the unlocalized name.
	*/
	std::string getName() const;

	/**
		Gets the resource path.
		@return The resource path of the block.
	*/
	std::string getResourcePath();
private:
	std::string unlocalizedName;
	int meta;
	std::string resourcePath;
};

#endif // IBLOCK_H

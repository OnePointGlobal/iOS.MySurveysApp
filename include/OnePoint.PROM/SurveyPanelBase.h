// --------------------------------------------------------------------------------------------------------------------
// <copyright file="SurveyPanelBase.java" company="OnePoint Global">
//   Copyright (c) 2012 OnePoint Global Ltd. All rights reserved.
// </copyright>
// <summary>
//   This file was autogenerated and you should not edit it. It will be 
//   regenerated whenever the schema changes.
//   All changes should be made in SurveyPanel.cs and the mode.xml. 
// </summary>
// --------------------------------------------------------------------------------------------------------------------

#import <Foundation/Foundation.h>
#import <OnePointFramework/DataObject.h>
#import "ISurveyPanelData.h"




//package OnePoint.PROM.Model 
    


    
@interface  SurveyPanelBase : DataObject<DataObject, ISurveyPanelData>
{
@private NSNumber *SurveyPanelID;
        
@private NSNumber *SurveyID;
        
@private NSNumber *PanelID;
        
@private NSNumber *Excluded;
        
	@private BOOL isExcludedSpecified;
@private NSNumber *IsDeleted;
        
@private NSDate *CreatedDate;
        
@private NSDate *LastUpdatedDate;
        
}


	  
/// <summary>
/// Gets or sets the 
/// </summary>

	@property(nonatomic,retain) NSNumber *SurveyPanelID;

	
	@property(nonatomic,retain) NSNumber *SurveyID;

	
	@property(nonatomic,retain) NSNumber *PanelID;

	
	@property(nonatomic,retain) NSNumber *Excluded;

		///<summary>Determines whether Excluded currently is set to NULL. Used in XML Serialisation.</summary>      
	@property(nonatomic,assign) BOOL isExcludedSpecified;
	
	@property(nonatomic,retain) NSNumber *IsDeleted;

	
	@property(readwrite,strong) NSDate *CreatedDate;

	
	@property(readwrite,strong) NSDate *LastUpdatedDate;

	@end
         

    

    
// --------------------------------------------------------------------------------------------------------------------
// <copyright file="ISampleQueryElement" company="OnePoint Global">
//   Copyright (c) 2012 OnePoint Global Ltd. All rights reserved.
// </copyright>
// <summary>
//   This file was autogenerated and you should not edit it. It will be 
//   regenerated whenever the schema changes.
//   All changes should be made in SampleQueryElement.cs and the mode.xml. 
// </summary>
// --------------------------------------------------------------------------------------------------------------------


/// <summary>
/// The ISampleQueryElement Interface Data Object Base
/// </summary>

#import <Foundation/Foundation.h>


/// <summary>
/// The ISampleQueryElementFactoryBase Interface Data Object Base
/// </summary>
	
@protocol ISampleQueryElementFactoryBase <NSObject>
   
-(NSString *) SelectAllStatement;
-(NSString *)TableName;
-(NSString *)ByPkClause;
-(NSString *)InsertStatement;
-(NSString *)UpdateStatement;
-(NSString *)DeleteStatement;
-(NSString *)DeleteByPk;


-(void) AddSampleQueryElementIDParameter:(DataHandler *) dataHandler withSampleQueryElementID:(NSNumber*) SampleQueryElementID;     
-(void) AddAndOrParameter:(DataHandler *) dataHandler withAndOr:(NSString *) AndOr;  
-(void) AddFieldNameParameter:(DataHandler *) dataHandler withFieldName:(NSString *) FieldName;  
-(void) AddConditionIDParameter:(DataHandler *) dataHandler withConditionID:(NSNumber*) ConditionID;     
-(void) AddFieldValueParameter:(DataHandler *) dataHandler withFieldValue:(NSString *) FieldValue;  
-(void) AddSampleIDParameter:(DataHandler *) dataHandler withSampleID:(NSNumber*) SampleID;     
-(void) AddIsBasicParameter:(DataHandler *) dataHandler withIsBasic:(NSNumber*) IsBasic;     
-(void) AddTypeParameter:(DataHandler *) dataHandler withType:(NSNumber*) Type;     
-(void) AddVariableIDParameter:(DataHandler *) dataHandler withVariableID:(NSNumber*) VariableID;     
-(void) AddVariableIDNullParameter:(DataHandler *) dataHandler;
-(void) AddPanelIDParameter:(DataHandler *) dataHandler withPanelID:(NSNumber*) PanelID;     
-(void) AddIsDeletedParameter:(DataHandler *) dataHandler withIsDeleted:(NSNumber*) IsDeleted;     
-(void) AddInUseParameter:(DataHandler *) dataHandler withInUse:(NSNumber*) InUse;     
-(void) AddInUseNullParameter:(DataHandler *) dataHandler;
-(void) AddCreatedDateParameter:(DataHandler *) dataHandler withCreatedDate:(NSDate *) CreatedDate; 
-(void) AddLastUpdatedDateParameter:(DataHandler *) dataHandler withLastUpdatedDate:(NSDate *) LastUpdatedDate; 
-(void) AddQuotaExpressionIDParameter:(DataHandler *) dataHandler withQuotaExpressionID:(NSNumber*) QuotaExpressionID;     
-(void) AddQuotaExpressionIDNullParameter:(DataHandler *) dataHandler;
-(id<ISampleQueryElementData>) FindBySampleQueryElementID:(NSNumber *) fieldValue;
        
-(id<ISampleQueryElementData>) FindByAndOr:(NSString *) fieldValue;
        
-(id<ISampleQueryElementData>) FindByFieldName:(NSString *) fieldValue;
        
-(id<ISampleQueryElementData>) FindByConditionID:(NSNumber *) fieldValue;
        
-(id<ISampleQueryElementData>) FindByFieldValue:(NSString *) fieldValue;
        
-(id<ISampleQueryElementData>) FindBySampleID:(NSNumber *) fieldValue;
        
-(id<ISampleQueryElementData>) FindByIsBasic:(NSNumber *) fieldValue;
        
-(id<ISampleQueryElementData>) FindByType:(NSNumber *) fieldValue;
        
-(id<ISampleQueryElementData>) FindByVariableID:(NSNumber *) fieldValue;
        
-(id<ISampleQueryElementData>) FindByPanelID:(NSNumber *) fieldValue;
        
-(id<ISampleQueryElementData>) FindByIsDeleted:(NSNumber *) fieldValue;
        
-(id<ISampleQueryElementData>) FindByInUse:(NSNumber *) fieldValue;
        
-(id<ISampleQueryElementData>) FindByCreatedDate:(NSDate *) fieldValue;
        
-(id<ISampleQueryElementData>) FindByLastUpdatedDate:(NSDate *) fieldValue;
        
-(id<ISampleQueryElementData>) FindByQuotaExpressionID:(NSNumber *) fieldValue;
        
-(id<ISampleQueryElementData>) CreateSampleQueryElement:(id<IDataReader>)reader;

@end
    

   
    


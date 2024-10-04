#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KuroSqliteBpLib

#include "Basic.hpp"

#include "JsEnv_structs.hpp"


namespace SDK::Params
{

// Function KuroSqliteBpLib.KuroQueryStatLibrary.AppendString
// 0x0010 (0x0010 - 0x0000)
struct KuroQueryStatLibrary_AppendString final
{
public:
	class FString                                 Content;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(KuroQueryStatLibrary_AppendString) == 0x000008, "Wrong alignment on KuroQueryStatLibrary_AppendString");
static_assert(sizeof(KuroQueryStatLibrary_AppendString) == 0x000010, "Wrong size on KuroQueryStatLibrary_AppendString");
static_assert(offsetof(KuroQueryStatLibrary_AppendString, Content) == 0x000000, "Member 'KuroQueryStatLibrary_AppendString::Content' has a wrong offset!");

// Function KuroSqliteBpLib.KuroQueryStatLibrary.SetCloseSaveQueryArgsFileAction
// 0x0018 (0x0018 - 0x0000)
struct KuroQueryStatLibrary_SetCloseSaveQueryArgsFileAction final
{
public:
	struct FJsObject                              Action;                                            // 0x0000(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(KuroQueryStatLibrary_SetCloseSaveQueryArgsFileAction) == 0x000008, "Wrong alignment on KuroQueryStatLibrary_SetCloseSaveQueryArgsFileAction");
static_assert(sizeof(KuroQueryStatLibrary_SetCloseSaveQueryArgsFileAction) == 0x000018, "Wrong size on KuroQueryStatLibrary_SetCloseSaveQueryArgsFileAction");
static_assert(offsetof(KuroQueryStatLibrary_SetCloseSaveQueryArgsFileAction, Action) == 0x000000, "Member 'KuroQueryStatLibrary_SetCloseSaveQueryArgsFileAction::Action' has a wrong offset!");

// Function KuroSqliteBpLib.KuroQueryStatLibrary.SetTestDataSavePath
// 0x0010 (0x0010 - 0x0000)
struct KuroQueryStatLibrary_SetTestDataSavePath final
{
public:
	class FString                                 Path;                                              // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(KuroQueryStatLibrary_SetTestDataSavePath) == 0x000008, "Wrong alignment on KuroQueryStatLibrary_SetTestDataSavePath");
static_assert(sizeof(KuroQueryStatLibrary_SetTestDataSavePath) == 0x000010, "Wrong size on KuroQueryStatLibrary_SetTestDataSavePath");
static_assert(offsetof(KuroQueryStatLibrary_SetTestDataSavePath, Path) == 0x000000, "Member 'KuroQueryStatLibrary_SetTestDataSavePath::Path' has a wrong offset!");

// Function KuroSqliteBpLib.KuroQueryStatLibrary.SetTestSqliteAction
// 0x0018 (0x0018 - 0x0000)
struct KuroQueryStatLibrary_SetTestSqliteAction final
{
public:
	struct FJsObject                              Action;                                            // 0x0000(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(KuroQueryStatLibrary_SetTestSqliteAction) == 0x000008, "Wrong alignment on KuroQueryStatLibrary_SetTestSqliteAction");
static_assert(sizeof(KuroQueryStatLibrary_SetTestSqliteAction) == 0x000018, "Wrong size on KuroQueryStatLibrary_SetTestSqliteAction");
static_assert(offsetof(KuroQueryStatLibrary_SetTestSqliteAction, Action) == 0x000000, "Member 'KuroQueryStatLibrary_SetTestSqliteAction::Action' has a wrong offset!");

// Function KuroSqliteBpLib.KuroSqliteLibrary.Execute
// 0x0028 (0x0028 - 0x0000)
struct KuroSqliteLibrary_Execute final
{
public:
	class FString                                 DbPath;                                            // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Sql;                                               // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(KuroSqliteLibrary_Execute) == 0x000008, "Wrong alignment on KuroSqliteLibrary_Execute");
static_assert(sizeof(KuroSqliteLibrary_Execute) == 0x000028, "Wrong size on KuroSqliteLibrary_Execute");
static_assert(offsetof(KuroSqliteLibrary_Execute, DbPath) == 0x000000, "Member 'KuroSqliteLibrary_Execute::DbPath' has a wrong offset!");
static_assert(offsetof(KuroSqliteLibrary_Execute, Sql) == 0x000010, "Member 'KuroSqliteLibrary_Execute::Sql' has a wrong offset!");
static_assert(offsetof(KuroSqliteLibrary_Execute, ReturnValue) == 0x000020, "Member 'KuroSqliteLibrary_Execute::ReturnValue' has a wrong offset!");

// Function KuroSqliteBpLib.KuroSqliteLibrary.ExecuteAsync
// 0x0020 (0x0020 - 0x0000)
struct KuroSqliteLibrary_ExecuteAsync final
{
public:
	class FString                                 DbPath;                                            // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Sql;                                               // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(KuroSqliteLibrary_ExecuteAsync) == 0x000008, "Wrong alignment on KuroSqliteLibrary_ExecuteAsync");
static_assert(sizeof(KuroSqliteLibrary_ExecuteAsync) == 0x000020, "Wrong size on KuroSqliteLibrary_ExecuteAsync");
static_assert(offsetof(KuroSqliteLibrary_ExecuteAsync, DbPath) == 0x000000, "Member 'KuroSqliteLibrary_ExecuteAsync::DbPath' has a wrong offset!");
static_assert(offsetof(KuroSqliteLibrary_ExecuteAsync, Sql) == 0x000010, "Member 'KuroSqliteLibrary_ExecuteAsync::Sql' has a wrong offset!");

// Function KuroSqliteBpLib.KuroSqliteLibrary.OpenCreateDB
// 0x0018 (0x0018 - 0x0000)
struct KuroSqliteLibrary_OpenCreateDB final
{
public:
	class FString                                 DbPath;                                            // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseThread;                                        // 0x0010(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0011(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(KuroSqliteLibrary_OpenCreateDB) == 0x000008, "Wrong alignment on KuroSqliteLibrary_OpenCreateDB");
static_assert(sizeof(KuroSqliteLibrary_OpenCreateDB) == 0x000018, "Wrong size on KuroSqliteLibrary_OpenCreateDB");
static_assert(offsetof(KuroSqliteLibrary_OpenCreateDB, DbPath) == 0x000000, "Member 'KuroSqliteLibrary_OpenCreateDB::DbPath' has a wrong offset!");
static_assert(offsetof(KuroSqliteLibrary_OpenCreateDB, bUseThread) == 0x000010, "Member 'KuroSqliteLibrary_OpenCreateDB::bUseThread' has a wrong offset!");
static_assert(offsetof(KuroSqliteLibrary_OpenCreateDB, ReturnValue) == 0x000011, "Member 'KuroSqliteLibrary_OpenCreateDB::ReturnValue' has a wrong offset!");

// Function KuroSqliteBpLib.KuroSqliteLibrary.Query
// 0x0030 (0x0030 - 0x0000)
struct KuroSqliteLibrary_Query final
{
public:
	class FString                                 DbPath;                                            // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Sql;                                               // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKuroSqliteResultSet*                   ResultSet;                                         // 0x0020(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0028(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(KuroSqliteLibrary_Query) == 0x000008, "Wrong alignment on KuroSqliteLibrary_Query");
static_assert(sizeof(KuroSqliteLibrary_Query) == 0x000030, "Wrong size on KuroSqliteLibrary_Query");
static_assert(offsetof(KuroSqliteLibrary_Query, DbPath) == 0x000000, "Member 'KuroSqliteLibrary_Query::DbPath' has a wrong offset!");
static_assert(offsetof(KuroSqliteLibrary_Query, Sql) == 0x000010, "Member 'KuroSqliteLibrary_Query::Sql' has a wrong offset!");
static_assert(offsetof(KuroSqliteLibrary_Query, ResultSet) == 0x000020, "Member 'KuroSqliteLibrary_Query::ResultSet' has a wrong offset!");
static_assert(offsetof(KuroSqliteLibrary_Query, ReturnValue) == 0x000028, "Member 'KuroSqliteLibrary_Query::ReturnValue' has a wrong offset!");

// Function KuroSqliteBpLib.KuroSqliteLibrary.QueryValue
// 0x0038 (0x0038 - 0x0000)
struct KuroSqliteLibrary_QueryValue final
{
public:
	class FString                                 DbPath;                                            // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Sql;                                               // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 OutValue;                                          // 0x0020(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0030(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(KuroSqliteLibrary_QueryValue) == 0x000008, "Wrong alignment on KuroSqliteLibrary_QueryValue");
static_assert(sizeof(KuroSqliteLibrary_QueryValue) == 0x000038, "Wrong size on KuroSqliteLibrary_QueryValue");
static_assert(offsetof(KuroSqliteLibrary_QueryValue, DbPath) == 0x000000, "Member 'KuroSqliteLibrary_QueryValue::DbPath' has a wrong offset!");
static_assert(offsetof(KuroSqliteLibrary_QueryValue, Sql) == 0x000010, "Member 'KuroSqliteLibrary_QueryValue::Sql' has a wrong offset!");
static_assert(offsetof(KuroSqliteLibrary_QueryValue, OutValue) == 0x000020, "Member 'KuroSqliteLibrary_QueryValue::OutValue' has a wrong offset!");
static_assert(offsetof(KuroSqliteLibrary_QueryValue, ReturnValue) == 0x000030, "Member 'KuroSqliteLibrary_QueryValue::ReturnValue' has a wrong offset!");

// Function KuroSqliteBpLib.KuroSqliteLibrary.SetDBKey
// 0x0010 (0x0010 - 0x0000)
struct KuroSqliteLibrary_SetDBKey final
{
public:
	class FString                                 DBKey;                                             // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(KuroSqliteLibrary_SetDBKey) == 0x000008, "Wrong alignment on KuroSqliteLibrary_SetDBKey");
static_assert(sizeof(KuroSqliteLibrary_SetDBKey) == 0x000010, "Wrong size on KuroSqliteLibrary_SetDBKey");
static_assert(offsetof(KuroSqliteLibrary_SetDBKey, DBKey) == 0x000000, "Member 'KuroSqliteLibrary_SetDBKey::DBKey' has a wrong offset!");

// Function KuroSqliteBpLib.KuroSqliteLibrary.SqliteStatusGetCurrent
// 0x0008 (0x0008 - 0x0000)
struct KuroSqliteLibrary_SqliteStatusGetCurrent final
{
public:
	int32                                         StatusOp;                                          // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(KuroSqliteLibrary_SqliteStatusGetCurrent) == 0x000004, "Wrong alignment on KuroSqliteLibrary_SqliteStatusGetCurrent");
static_assert(sizeof(KuroSqliteLibrary_SqliteStatusGetCurrent) == 0x000008, "Wrong size on KuroSqliteLibrary_SqliteStatusGetCurrent");
static_assert(offsetof(KuroSqliteLibrary_SqliteStatusGetCurrent, StatusOp) == 0x000000, "Member 'KuroSqliteLibrary_SqliteStatusGetCurrent::StatusOp' has a wrong offset!");
static_assert(offsetof(KuroSqliteLibrary_SqliteStatusGetCurrent, ReturnValue) == 0x000004, "Member 'KuroSqliteLibrary_SqliteStatusGetCurrent::ReturnValue' has a wrong offset!");

// Function KuroSqliteBpLib.KuroSqliteLibrary.SqliteStatusGetHighWater
// 0x000C (0x000C - 0x0000)
struct KuroSqliteLibrary_SqliteStatusGetHighWater final
{
public:
	int32                                         StatusOp;                                          // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ResetHighWater;                                    // 0x0004(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(KuroSqliteLibrary_SqliteStatusGetHighWater) == 0x000004, "Wrong alignment on KuroSqliteLibrary_SqliteStatusGetHighWater");
static_assert(sizeof(KuroSqliteLibrary_SqliteStatusGetHighWater) == 0x00000C, "Wrong size on KuroSqliteLibrary_SqliteStatusGetHighWater");
static_assert(offsetof(KuroSqliteLibrary_SqliteStatusGetHighWater, StatusOp) == 0x000000, "Member 'KuroSqliteLibrary_SqliteStatusGetHighWater::StatusOp' has a wrong offset!");
static_assert(offsetof(KuroSqliteLibrary_SqliteStatusGetHighWater, ResetHighWater) == 0x000004, "Member 'KuroSqliteLibrary_SqliteStatusGetHighWater::ResetHighWater' has a wrong offset!");
static_assert(offsetof(KuroSqliteLibrary_SqliteStatusGetHighWater, ReturnValue) == 0x000008, "Member 'KuroSqliteLibrary_SqliteStatusGetHighWater::ReturnValue' has a wrong offset!");

// Function KuroSqliteBpLib.KuroSqliteResultSet.GetBigInt
// 0x0020 (0x0020 - 0x0000)
struct KuroSqliteResultSet_GetBigInt final
{
public:
	class FString                                 Column;                                            // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                         Value;                                             // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(KuroSqliteResultSet_GetBigInt) == 0x000008, "Wrong alignment on KuroSqliteResultSet_GetBigInt");
static_assert(sizeof(KuroSqliteResultSet_GetBigInt) == 0x000020, "Wrong size on KuroSqliteResultSet_GetBigInt");
static_assert(offsetof(KuroSqliteResultSet_GetBigInt, Column) == 0x000000, "Member 'KuroSqliteResultSet_GetBigInt::Column' has a wrong offset!");
static_assert(offsetof(KuroSqliteResultSet_GetBigInt, Value) == 0x000010, "Member 'KuroSqliteResultSet_GetBigInt::Value' has a wrong offset!");
static_assert(offsetof(KuroSqliteResultSet_GetBigInt, ReturnValue) == 0x000018, "Member 'KuroSqliteResultSet_GetBigInt::ReturnValue' has a wrong offset!");

// Function KuroSqliteBpLib.KuroSqliteResultSet.GetBool
// 0x0018 (0x0018 - 0x0000)
struct KuroSqliteResultSet_GetBool final
{
public:
	class FString                                 Column;                                            // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Value;                                             // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0011(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(KuroSqliteResultSet_GetBool) == 0x000008, "Wrong alignment on KuroSqliteResultSet_GetBool");
static_assert(sizeof(KuroSqliteResultSet_GetBool) == 0x000018, "Wrong size on KuroSqliteResultSet_GetBool");
static_assert(offsetof(KuroSqliteResultSet_GetBool, Column) == 0x000000, "Member 'KuroSqliteResultSet_GetBool::Column' has a wrong offset!");
static_assert(offsetof(KuroSqliteResultSet_GetBool, Value) == 0x000010, "Member 'KuroSqliteResultSet_GetBool::Value' has a wrong offset!");
static_assert(offsetof(KuroSqliteResultSet_GetBool, ReturnValue) == 0x000011, "Member 'KuroSqliteResultSet_GetBool::ReturnValue' has a wrong offset!");

// Function KuroSqliteBpLib.KuroSqliteResultSet.GetBytes
// 0x0028 (0x0028 - 0x0000)
struct KuroSqliteResultSet_GetBytes final
{
public:
	class FString                                 Column;                                            // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FArrayBuffer                           Value;                                             // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(KuroSqliteResultSet_GetBytes) == 0x000008, "Wrong alignment on KuroSqliteResultSet_GetBytes");
static_assert(sizeof(KuroSqliteResultSet_GetBytes) == 0x000028, "Wrong size on KuroSqliteResultSet_GetBytes");
static_assert(offsetof(KuroSqliteResultSet_GetBytes, Column) == 0x000000, "Member 'KuroSqliteResultSet_GetBytes::Column' has a wrong offset!");
static_assert(offsetof(KuroSqliteResultSet_GetBytes, Value) == 0x000010, "Member 'KuroSqliteResultSet_GetBytes::Value' has a wrong offset!");
static_assert(offsetof(KuroSqliteResultSet_GetBytes, ReturnValue) == 0x000020, "Member 'KuroSqliteResultSet_GetBytes::ReturnValue' has a wrong offset!");

// Function KuroSqliteBpLib.KuroSqliteResultSet.GetFloat
// 0x0018 (0x0018 - 0x0000)
struct KuroSqliteResultSet_GetFloat final
{
public:
	class FString                                 Column;                                            // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Value;                                             // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0014(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(KuroSqliteResultSet_GetFloat) == 0x000008, "Wrong alignment on KuroSqliteResultSet_GetFloat");
static_assert(sizeof(KuroSqliteResultSet_GetFloat) == 0x000018, "Wrong size on KuroSqliteResultSet_GetFloat");
static_assert(offsetof(KuroSqliteResultSet_GetFloat, Column) == 0x000000, "Member 'KuroSqliteResultSet_GetFloat::Column' has a wrong offset!");
static_assert(offsetof(KuroSqliteResultSet_GetFloat, Value) == 0x000010, "Member 'KuroSqliteResultSet_GetFloat::Value' has a wrong offset!");
static_assert(offsetof(KuroSqliteResultSet_GetFloat, ReturnValue) == 0x000014, "Member 'KuroSqliteResultSet_GetFloat::ReturnValue' has a wrong offset!");

// Function KuroSqliteBpLib.KuroSqliteResultSet.GetInt
// 0x0018 (0x0018 - 0x0000)
struct KuroSqliteResultSet_GetInt final
{
public:
	class FString                                 Column;                                            // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Value;                                             // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0014(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(KuroSqliteResultSet_GetInt) == 0x000008, "Wrong alignment on KuroSqliteResultSet_GetInt");
static_assert(sizeof(KuroSqliteResultSet_GetInt) == 0x000018, "Wrong size on KuroSqliteResultSet_GetInt");
static_assert(offsetof(KuroSqliteResultSet_GetInt, Column) == 0x000000, "Member 'KuroSqliteResultSet_GetInt::Column' has a wrong offset!");
static_assert(offsetof(KuroSqliteResultSet_GetInt, Value) == 0x000010, "Member 'KuroSqliteResultSet_GetInt::Value' has a wrong offset!");
static_assert(offsetof(KuroSqliteResultSet_GetInt, ReturnValue) == 0x000014, "Member 'KuroSqliteResultSet_GetInt::ReturnValue' has a wrong offset!");

// Function KuroSqliteBpLib.KuroSqliteResultSet.GetString
// 0x0028 (0x0028 - 0x0000)
struct KuroSqliteResultSet_GetString final
{
public:
	class FString                                 Column;                                            // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Value;                                             // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(KuroSqliteResultSet_GetString) == 0x000008, "Wrong alignment on KuroSqliteResultSet_GetString");
static_assert(sizeof(KuroSqliteResultSet_GetString) == 0x000028, "Wrong size on KuroSqliteResultSet_GetString");
static_assert(offsetof(KuroSqliteResultSet_GetString, Column) == 0x000000, "Member 'KuroSqliteResultSet_GetString::Column' has a wrong offset!");
static_assert(offsetof(KuroSqliteResultSet_GetString, Value) == 0x000010, "Member 'KuroSqliteResultSet_GetString::Value' has a wrong offset!");
static_assert(offsetof(KuroSqliteResultSet_GetString, ReturnValue) == 0x000020, "Member 'KuroSqliteResultSet_GetString::ReturnValue' has a wrong offset!");

// Function KuroSqliteBpLib.KuroSqliteResultSet.HasValue
// 0x0001 (0x0001 - 0x0000)
struct KuroSqliteResultSet_HasValue final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(KuroSqliteResultSet_HasValue) == 0x000001, "Wrong alignment on KuroSqliteResultSet_HasValue");
static_assert(sizeof(KuroSqliteResultSet_HasValue) == 0x000001, "Wrong size on KuroSqliteResultSet_HasValue");
static_assert(offsetof(KuroSqliteResultSet_HasValue, ReturnValue) == 0x000000, "Member 'KuroSqliteResultSet_HasValue::ReturnValue' has a wrong offset!");

// Function KuroSqliteBpLib.KuroSqliteResultSet.MoveToNext
// 0x0001 (0x0001 - 0x0000)
struct KuroSqliteResultSet_MoveToNext final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(KuroSqliteResultSet_MoveToNext) == 0x000001, "Wrong alignment on KuroSqliteResultSet_MoveToNext");
static_assert(sizeof(KuroSqliteResultSet_MoveToNext) == 0x000001, "Wrong size on KuroSqliteResultSet_MoveToNext");
static_assert(offsetof(KuroSqliteResultSet_MoveToNext, ReturnValue) == 0x000000, "Member 'KuroSqliteResultSet_MoveToNext::ReturnValue' has a wrong offset!");

}


#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C8 (0x2F0 - 0x28)
// Class MeshDescription.MeshDescriptionBase
class UMeshDescriptionBase : public UObject
{
public:
	uint8                                        Pad_2799[0x2C8];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMeshDescriptionBase* GetDefaultObj();

	void SetVertexPosition(const struct FVertexID& VertexID, struct FVector& Position);
	void SetPolygonVertexInstances(const struct FPolygonID& PolygonID, TArray<struct FVertexInstanceID>& VertexInstanceIDs);
	void SetPolygonPolygonGroup(const struct FPolygonID& PolygonID, const struct FPolygonGroupID& PolygonGroupID);
	void ReversePolygonFacing(const struct FPolygonID& PolygonID);
	void ReserveNewVertices(int32 NumberOfNewVertices);
	void ReserveNewVertexInstances(int32 NumberOfNewVertexInstances);
	void ReserveNewTriangles(int32 NumberOfNewTriangles);
	void ReserveNewPolygons(int32 NumberOfNewPolygons);
	void ReserveNewPolygonGroups(int32 NumberOfNewPolygonGroups);
	void ReserveNewEdges(int32 NumberOfNewEdges);
	bool IsVertexValid(const struct FVertexID& VertexID);
	bool IsVertexOrphaned(const struct FVertexID& VertexID);
	bool IsVertexInstanceValid(const struct FVertexInstanceID& VertexInstanceID);
	bool IsTriangleValid(const struct FTriangleID& TriangleID);
	bool IsTrianglePartOfNgon(const struct FTriangleID& TriangleID);
	bool IsPolygonValid(const struct FPolygonID& PolygonID);
	bool IsPolygonGroupValid(const struct FPolygonGroupID& PolygonGroupID);
	bool IsEmpty();
	bool IsEdgeValid(const struct FEdgeID& EdgeID);
	bool IsEdgeInternalToPolygon(const struct FEdgeID& EdgeID, const struct FPolygonID& PolygonID);
	bool IsEdgeInternal(const struct FEdgeID& EdgeID);
	void GetVertexVertexInstances(const struct FVertexID& VertexID, TArray<struct FVertexInstanceID>* OutVertexInstanceIDs);
	struct FVector GetVertexPosition(const struct FVertexID& VertexID);
	struct FEdgeID GetVertexPairEdge(const struct FVertexID& VertexID0, const struct FVertexID& VertexID1);
	struct FVertexID GetVertexInstanceVertex(const struct FVertexInstanceID& VertexInstanceID);
	struct FEdgeID GetVertexInstancePairEdge(const struct FVertexInstanceID& VertexInstanceID0, const struct FVertexInstanceID& VertexInstanceID1);
	struct FVertexInstanceID GetVertexInstanceForTriangleVertex(const struct FTriangleID& TriangleID, const struct FVertexID& VertexID);
	struct FVertexInstanceID GetVertexInstanceForPolygonVertex(const struct FPolygonID& PolygonID, const struct FVertexID& VertexID);
	int32 GetVertexInstanceCount();
	void GetVertexInstanceConnectedTriangles(const struct FVertexInstanceID& VertexInstanceID, TArray<struct FTriangleID>* OutConnectedTriangleIDs);
	void GetVertexInstanceConnectedPolygons(const struct FVertexInstanceID& VertexInstanceID, TArray<struct FPolygonID>* OutConnectedPolygonIDs);
	int32 GetVertexCount();
	void GetVertexConnectedTriangles(const struct FVertexID& VertexID, TArray<struct FTriangleID>* OutConnectedTriangleIDs);
	void GetVertexConnectedPolygons(const struct FVertexID& VertexID, TArray<struct FPolygonID>* OutConnectedPolygonIDs);
	void GetVertexConnectedEdges(const struct FVertexID& VertexID, TArray<struct FEdgeID>* OutEdgeIDs);
	void GetVertexAdjacentVertices(const struct FVertexID& VertexID, TArray<struct FVertexID>* OutAdjacentVertexIDs);
	void GetTriangleVertices(const struct FTriangleID& TriangleID, TArray<struct FVertexID>* OutVertexIDs);
	void GetTriangleVertexInstances(const struct FTriangleID& TriangleID, TArray<struct FVertexInstanceID>* OutVertexInstanceIDs);
	struct FVertexInstanceID GetTriangleVertexInstance(const struct FTriangleID& TriangleID, int32 Index);
	struct FPolygonGroupID GetTrianglePolygonGroup(const struct FTriangleID& TriangleID);
	struct FPolygonID GetTrianglePolygon(const struct FTriangleID& TriangleID);
	void GetTriangleEdges(const struct FTriangleID& TriangleID, TArray<struct FEdgeID>* OutEdgeIDs);
	int32 GetTriangleCount();
	void GetTriangleAdjacentTriangles(const struct FTriangleID& TriangleID, TArray<struct FTriangleID>* OutTriangleIDs);
	void GetPolygonVertices(const struct FPolygonID& PolygonID, TArray<struct FVertexID>* OutVertexIDs);
	void GetPolygonVertexInstances(const struct FPolygonID& PolygonID, TArray<struct FVertexInstanceID>* OutVertexInstanceIDs);
	void GetPolygonTriangles(const struct FPolygonID& PolygonID, TArray<struct FTriangleID>* OutTriangleIDs);
	struct FPolygonGroupID GetPolygonPolygonGroup(const struct FPolygonID& PolygonID);
	void GetPolygonPerimeterEdges(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OutEdgeIDs);
	void GetPolygonInternalEdges(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OutEdgeIDs);
	void GetPolygonGroupPolygons(const struct FPolygonGroupID& PolygonGroupID, TArray<struct FPolygonID>* OutPolygonIDs);
	int32 GetPolygonGroupCount();
	int32 GetPolygonCount();
	void GetPolygonAdjacentPolygons(const struct FPolygonID& PolygonID, TArray<struct FPolygonID>* OutPolygonIDs);
	int32 GetNumVertexVertexInstances(const struct FVertexID& VertexID);
	int32 GetNumVertexInstanceConnectedTriangles(const struct FVertexInstanceID& VertexInstanceID);
	int32 GetNumVertexInstanceConnectedPolygons(const struct FVertexInstanceID& VertexInstanceID);
	int32 GetNumVertexConnectedTriangles(const struct FVertexID& VertexID);
	int32 GetNumVertexConnectedPolygons(const struct FVertexID& VertexID);
	int32 GetNumVertexConnectedEdges(const struct FVertexID& VertexID);
	int32 GetNumPolygonVertices(const struct FPolygonID& PolygonID);
	int32 GetNumPolygonTriangles(const struct FPolygonID& PolygonID);
	int32 GetNumPolygonInternalEdges(const struct FPolygonID& PolygonID);
	int32 GetNumPolygonGroupPolygons(const struct FPolygonGroupID& PolygonGroupID);
	int32 GetNumEdgeConnectedTriangles(const struct FEdgeID& EdgeID);
	int32 GetNumEdgeConnectedPolygons(const struct FEdgeID& EdgeID);
	void GetEdgeVertices(const struct FEdgeID& EdgeID, TArray<struct FVertexID>* OutVertexIDs);
	struct FVertexID GetEdgeVertex(const struct FEdgeID& EdgeID, int32 VertexNumber);
	int32 GetEdgeCount();
	void GetEdgeConnectedTriangles(const struct FEdgeID& EdgeID, TArray<struct FTriangleID>* OutConnectedTriangleIDs);
	void GetEdgeConnectedPolygons(const struct FEdgeID& EdgeID, TArray<struct FPolygonID>* OutConnectedPolygonIDs);
	void Empty();
	void DeleteVertexInstance(const struct FVertexInstanceID& VertexInstanceID, TArray<struct FVertexID>* OrphanedVertices);
	void DeleteVertex(const struct FVertexID& VertexID);
	void DeleteTriangle(const struct FTriangleID& TriangleID, TArray<struct FEdgeID>* OrphanedEdges, TArray<struct FVertexInstanceID>* OrphanedVertexInstances, TArray<struct FPolygonGroupID>* OrphanedPolygonGroupsPtr);
	void DeletePolygonGroup(const struct FPolygonGroupID& PolygonGroupID);
	void DeletePolygon(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OrphanedEdges, TArray<struct FVertexInstanceID>* OrphanedVertexInstances, TArray<struct FPolygonGroupID>* OrphanedPolygonGroups);
	void DeleteEdge(const struct FEdgeID& EdgeID, TArray<struct FVertexID>* OrphanedVertices);
	void CreateVertexWithID(const struct FVertexID& VertexID);
	void CreateVertexInstanceWithID(const struct FVertexInstanceID& VertexInstanceID, const struct FVertexID& VertexID);
	struct FVertexInstanceID CreateVertexInstance(const struct FVertexID& VertexID);
	struct FVertexID CreateVertex();
	void CreateTriangleWithID(const struct FTriangleID& TriangleID, const struct FPolygonGroupID& PolygonGroupID, TArray<struct FVertexInstanceID>& VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs);
	struct FTriangleID CreateTriangle(const struct FPolygonGroupID& PolygonGroupID, TArray<struct FVertexInstanceID>& VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs);
	void CreatePolygonWithID(const struct FPolygonID& PolygonID, const struct FPolygonGroupID& PolygonGroupID, TArray<struct FVertexInstanceID>* VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs);
	void CreatePolygonGroupWithID(const struct FPolygonGroupID& PolygonGroupID);
	struct FPolygonGroupID CreatePolygonGroup();
	struct FPolygonID CreatePolygon(const struct FPolygonGroupID& PolygonGroupID, TArray<struct FVertexInstanceID>* VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs);
	void CreateEdgeWithID(const struct FEdgeID& EdgeID, const struct FVertexID& VertexID0, const struct FVertexID& VertexID1);
	struct FEdgeID CreateEdge(const struct FVertexID& VertexID0, const struct FVertexID& VertexID1);
	void ComputePolygonTriangulation(const struct FPolygonID& PolygonID);
};

// 0x0 (0x28 - 0x28)
// Class MeshDescription.MeshDescriptionBaseBulkData
class UMeshDescriptionBaseBulkData : public UObject
{
public:

	static class UClass* StaticClass();
	static class UMeshDescriptionBaseBulkData* GetDefaultObj();

};

}



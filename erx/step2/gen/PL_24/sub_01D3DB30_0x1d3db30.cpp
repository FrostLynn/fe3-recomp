#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_01D3DB30
// Address: 0x1d3db30 - 0x1d3dc18
void sub_01D3DB30_0x1d3db30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D3DB30_0x1d3db30");
#endif

    switch (ctx->pc) {
        case 0x1d3db44u: goto label_1d3db44;
        case 0x1d3db58u: goto label_1d3db58;
        case 0x1d3db5cu: goto label_1d3db5c;
        case 0x1d3db78u: goto label_1d3db78;
        case 0x1d3db84u: goto label_1d3db84;
        case 0x1d3dbc4u: goto label_1d3dbc4;
        case 0x1d3dbf0u: goto label_1d3dbf0;
        case 0x1d3dbfcu: goto label_1d3dbfc;
        case 0x1d3dc08u: goto label_1d3dc08;
        default: break;
    }

    ctx->pc = 0x1d3db30u;

    // 0x1d3db30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d3db30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d3db34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d3db34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d3db38: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d3db38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d3db3c: 0xc74ef12  jal         func_1D3BC48
    ctx->pc = 0x1D3DB3Cu;
    SET_GPR_U32(ctx, 31, 0x1D3DB44u);
    ctx->pc = 0x1D3DB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3DB3Cu;
    // 0x1d3db40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC48u, 0x1D3DB3Cu, 0x1D3DB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DB44u;
label_1d3db44:
    // 0x1d3db44: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d3db44u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3db48: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D3DB48u;
    {
        const bool branch_taken_0x1d3db48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D3DB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DB48u;
        // 0x1d3db4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3db48) {
            ctx->pc = 0x1D3DB6Cu;
            goto label_1d3db6c;
        }
    }
    ctx->pc = 0x1D3DB50u;
    // 0x1d3db50: 0xc74ef14  jal         func_1D3BC50
    ctx->pc = 0x1D3DB50u;
    SET_GPR_U32(ctx, 31, 0x1D3DB58u);
    ctx->pc = 0x1D3BC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC50u, 0x1D3DB50u, 0x1D3DB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DB58u;
label_1d3db58:
    // 0x1d3db58: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d3db58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d3db5c:
    // 0x1d3db5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d3db5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3db60: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d3db60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d3db64: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3DB64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3DB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DB64u;
        // 0x1d3db68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3DB64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3DB6Cu;
label_1d3db6c:
    // 0x1d3db6c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d3db6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d3db70: 0xc74ef16  jal         func_1D3BC58
    ctx->pc = 0x1D3DB70u;
    SET_GPR_U32(ctx, 31, 0x1D3DB78u);
    ctx->pc = 0x1D3DB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3DB70u;
    // 0x1d3db74: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC58u, 0x1D3DB70u, 0x1D3DB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DB78u;
label_1d3db78:
    // 0x1d3db78: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1d3db78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1d3db7c: 0xc74ef24  jal         func_1D3BC90
    ctx->pc = 0x1D3DB7Cu;
    SET_GPR_U32(ctx, 31, 0x1D3DB84u);
    ctx->pc = 0x1D3DB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3DB7Cu;
    // 0x1d3db80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC90u, 0x1D3DB7Cu, 0x1D3DB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DB84u;
label_1d3db84:
    // 0x1d3db84: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1D3DB84u;
    {
        const bool branch_taken_0x1d3db84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3DB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DB84u;
        // 0x1d3db88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3db84) {
            ctx->pc = 0x1D3DB5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3db5c;
        }
    }
    ctx->pc = 0x1D3DB8Cu;
    // 0x1d3db8c: 0x0  nop
    ctx->pc = 0x1d3db8cu;
    // NOP
    // 0x1d3db90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d3db90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d3db94: 0x3c0f01d4  lui         $t7, 0x1D4
    ctx->pc = 0x1d3db94u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)468 << 16));
    // 0x1d3db98: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d3db98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d3db9c: 0x25ee5c40  addiu       $t6, $t7, 0x5C40
    ctx->pc = 0x1d3db9cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 23616));
    // 0x1d3dba0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1d3dba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1d3dba4: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1d3dba4u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1D45C44u));
    // 0x1d3dba8: 0x8ded5c40  lw          $t5, 0x5C40($t7)
    ctx->pc = 0x1d3dba8u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1D45C40u));
    // 0x1d3dbac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d3dbacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3dbb0: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1d3dbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1d3dbb4: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1d3dbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1d3dbb8: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d3dbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d3dbbc: 0xc74ef16  jal         func_1D3BC58
    ctx->pc = 0x1D3DBBCu;
    SET_GPR_U32(ctx, 31, 0x1D3DBC4u);
    ctx->pc = 0x1D3DBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3DBBCu;
    // 0x1d3dbc0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC58u, 0x1D3DBBCu, 0x1D3DBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DBC4u;
label_1d3dbc4:
    // 0x1d3dbc4: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1d3dbc4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1d3dbc8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d3dbc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3dbcc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d3dbccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3dbd0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d3dbd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3dbd4: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d3dbd4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d3dbd8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d3dbd8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3dbdc: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1d3dbdcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1d3dbe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3dbe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3dbe4: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d3dbe4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d3dbe8: 0xc74ef22  jal         func_1D3BC88
    ctx->pc = 0x1D3DBE8u;
    SET_GPR_U32(ctx, 31, 0x1D3DBF0u);
    ctx->pc = 0x1D3DBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3DBE8u;
    // 0x1d3dbec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC88u, 0x1D3DBE8u, 0x1D3DBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DBF0u;
label_1d3dbf0:
    // 0x1d3dbf0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d3dbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d3dbf4: 0xc74ef16  jal         func_1D3BC58
    ctx->pc = 0x1D3DBF4u;
    SET_GPR_U32(ctx, 31, 0x1D3DBFCu);
    ctx->pc = 0x1D3DBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3DBF4u;
    // 0x1d3dbf8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC58u, 0x1D3DBF4u, 0x1D3DBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DBFCu;
label_1d3dbfc:
    // 0x1d3dbfc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d3dbfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3dc00: 0xc74ef26  jal         func_1D3BC98
    ctx->pc = 0x1D3DC00u;
    SET_GPR_U32(ctx, 31, 0x1D3DC08u);
    ctx->pc = 0x1D3DC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3DC00u;
    // 0x1d3dc04: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC98u, 0x1D3DC00u, 0x1D3DC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DC08u;
label_1d3dc08:
    // 0x1d3dc08: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1d3dc08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3dc0c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d3dc0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d3dc10: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3DC10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3DC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DC10u;
        // 0x1d3dc14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3DC10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3DC18u;
}
